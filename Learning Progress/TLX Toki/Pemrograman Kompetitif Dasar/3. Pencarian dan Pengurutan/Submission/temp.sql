-- Tabel-Tabel
CREATE TABLE program_studi (
    kode_prodi VARCHAR(10) PRIMARY KEY,
    nama_prodi VARCHAR(255) NOT NULL,
    jenjang_prodi VARCHAR(10),
    alamat_prodi TEXT
);

CREATE TABLE dosen (
    kode_dosen VARCHAR(10) PRIMARY KEY,
    nidn VARCHAR(15) NOT NULL,
    kip VARCHAR(10) NOT NULL,
    nama_dosen VARCHAR(255)
);

CREATE TABLE mata_kuliah (
    kode_mata_kuliah VARCHAR(10) PRIMARY KEY,
    nama_mata_kuliah VARCHAR(255) NOT NULL,
    sks VARCHAR(1),
    semester VARCHAR(2)
);

CREATE TABLE mahasiswa (
    nim VARCHAR(9) PRIMARY KEY,
    nama_mahasiswa VARCHAR(255) NOT NULL,
    angkatan VARCHAR(4),
    kode_program_studi VARCHAR(10),
    kode_dosen_pa VARCHAR(10),
    FOREIGN KEY (kode_program_studi) REFERENCES program_studi(kode_prodi),
    FOREIGN KEY (kode_dosen_pa) REFERENCES dosen(kode_dosen)
);

CREATE TABLE khs (
    tahun_akademik VARCHAR(9),
    semester VARCHAR(2),
    nim VARCHAR(9),
    kode_mata_kuliah VARCHAR(10),
    nilai VARCHAR(2),
    FOREIGN KEY (nim) REFERENCES mahasiswa(nim),
    FOREIGN KEY (kode_mata_kuliah) REFERENCES mata_kuliah(kode_mata_kuliah)
);

-- Stored Function untuk menentukan bobot
DELIMITER //
CREATE FUNCTION fungsi_Bobot(NilaiHuruf VARCHAR(2)) RETURNS DECIMAL(4,2)
BEGIN
    DECLARE Bobot DECIMAL(4,2);
    
    CASE NilaiHuruf
        WHEN 'A'  THEN SET Bobot = 4.00;
        WHEN 'B+' THEN SET Bobot = 3.50;
        WHEN 'B'  THEN SET Bobot = 3.00;
        WHEN 'C+' THEN SET Bobot = 2.50;
        WHEN 'C'  THEN SET Bobot = 2.00;
        WHEN 'D'  THEN SET Bobot = 1.00;
        WHEN 'E'  THEN SET Bobot = 0.00;
        ELSE SET Bobot = -1.00;
    END CASE;
    
    RETURN Bobot;
END; //
DELIMITER ;

-- Contoh penggunaan fungsi untuk menghitung bobot berdasarkan nilai huruf 'A'
SELECT fungsi_Bobot('A+'); -- Hasilnya adalah 4.00

-- Stored Function untuk menghitung nilai SKS
DELIMITER //
CREATE FUNCTION fungsi_NilaiSKS(SKS VARCHAR(1), NilaiHuruf VARCHAR(2)) RETURNS DECIMAL(4,2)
BEGIN
    DECLARE Bobot DECIMAL(4,2);
    DECLARE SKSValue DECIMAL(4,2);
    
    -- Hitung Bobot berdasarkan Nilai Huruf
    SET Bobot = fungsi_Bobot(NilaiHuruf);
    
    -- Konversi SKS ke nilai numerik
    SET SKSValue = CASE SKS
        WHEN '1' THEN 1.00;
        WHEN '2' THEN 2.00;
        WHEN '3' THEN 3.00;
        WHEN '4' THEN 4.00;
        ELSE 0.00;
    END CASE;
    
    -- Hitung Nilai SKS
    RETURN SKSValue * Bobot;
END; //
DELIMITER ;

-- Contoh penggunaan fungsi untuk menghitung nilai SKS berdasarkan SKS '3' dan nilai huruf 'B'
SELECT fungsi_NilaiSKS('3', 'B'); -- Hasilnya adalah 9.00

-- Stored Function untuk menghitung total bobot nilai SKS
DELIMITER //
CREATE FUNCTION fungsi_TotalBobotNilaiSKS(tahun_akademik VARCHAR(9), semester VARCHAR(2), nim VARCHAR(9)) RETURNS DECIMAL(10,2)
BEGIN
    DECLARE TotalBobot DECIMAL(10,2);
    
    -- Menghitung total bobot nilai SKS
    SELECT SUM(fungsi_NilaiSKS(mk.sks, khs.nilai)) INTO TotalBobot
    FROM khs
    INNER JOIN mata_kuliah mk ON khs.kode_mata_kuliah = mk.kode_mata_kuliah
    WHERE khs.tahun_akademik = tahun_akademik
    AND khs.semester = semester
    AND khs.nim = nim;
    
    RETURN TotalBobot;
END; //
DELIMITER ;

-- Stored Function untuk menghitung SKS
DELIMITER //
CREATE FUNCTION fungsi_JumlahSKS(tahun_akademik VARCHAR(9), semester VARCHAR(2), nim VARCHAR(9)) RETURNS DECIMAL(5,2)
BEGIN
    DECLARE TotalSKS DECIMAL(5,2);
    
    -- Menghitung jumlah SKS
    SELECT SUM(mk.sks) INTO TotalSKS
    FROM khs
    INNER JOIN mata_kuliah mk ON khs.kode_mata_kuliah = mk.kode_mata_kuliah
    WHERE khs.tahun_akademik = tahun_akademik
    AND khs.semester = semester
    AND khs.nim = nim;
    
    RETURN TotalSKS;
END //
DELIMITER ;


-- Stored Procedure untuk menentukan beban semester berikutnya
DELIMITER //
CREATE PROCEDURE prosedur_SKSNext(
    IN tahun_akademik_param VARCHAR(10),
    IN semester_param INT,
    IN nim_param VARCHAR(15),
    OUT beban_sks INT
)
BEGIN
    DECLARE ip DECIMAL(4,2);
    
    -- Menghitung IP mahasiswa
    SELECT AVG(fungsi_IPS(nim_param))
    INTO ip
    FROM khs
    WHERE tahun_akademik = tahun_akademik_param
        AND semester = semester_param
        AND nim = nim_param;
    
    -- Menentukan beban SKS berikutnya berdasarkan IP
    IF ip >= 3.00 THEN
        SET beban_sks = 24;
    ELSEIF ip >= 2.50 THEN
        SET beban_sks = 22;
    ELSEIF ip >= 2.00 THEN
        SET beban_sks = 20;
    ELSEIF ip >= 1.50 THEN
        SET beban_sks = 18;
    ELSE
        SET beban_sks = 16;
    END IF;
END;
//
DELIMITER ;
