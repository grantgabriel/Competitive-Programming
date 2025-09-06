import itertools

def solve(N, M, digits):
    digits = sorted(digits)
    
    for length in range(N, 1000001):
        for comb in itertools.product(digits, repeat=length):
            number = int(''.join(comb))
            
            if number % M == 0:
                # Cek apakah semua digit favorit muncul
                if all(str(d) in str(number) for d in digits):
                    return str(number)
    
    return "-1"

N, M = map(int, input().split())
digits = list(map(int, input().split()))

print(solve(N, M, digits))
