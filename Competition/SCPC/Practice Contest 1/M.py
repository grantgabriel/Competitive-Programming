def kuis(A, B):
    if A == 0:
        return "Ya"
    if B == 0:
        return "Tidak"
    
    base_25A = 25 ** A
    base_17081945B = 17081945 ** B
    
    if base_17081945B % base_25A == 0:
        return "Ya"
    else:
        return "Tidak"
    
def main():
    A, B = map(int, input().split()) 
    hasil = kuis(A, B)
    print(hasil)

if __name__ == "__main__":
    main()