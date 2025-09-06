MOD = 1000000007

def modin(a, p):
    return pow(a, p-2, p)

def calcFactdanInverse(batas, mod):
    fact = [1] * (batas + 1)
    inverse = [1] * (batas + 1)
    
    for i in range(2, batas + 1):
        fact[i] = fact[i - 1] * i % mod
    
    inverse[batas] = modin(fact[batas], mod)
    
    for i in range(batas - 1, 0, -1):
        inverse[i] = inverse[i + 1] * (i + 1) % mod
    
    return fact, inverse

def kombinasi(n, k, fact, inverse, mod):
    if k > n or k < 0:
        return 0
    return fact[n] * inverse[k] % mod * inverse[n - k] % mod

def solve(T, queries, fact, inverse):
    res = 0
    
    for n, m, k in queries:
        if k > n or k > m:
            continue
        
        sigma = 0
        
        for j in range(k + 1):
            term = kombinasi(n, j, fact, inverse, MOD) * kombinasi(m, k - j, fact, inverse, MOD) % MOD
            sigma = (sigma + term) % MOD
        
        res = (res + sigma) % MOD
    
    return res

def main():
    import sys
    input = sys.stdin.read
    cin = input().split()
    
    T = int(cin[0])
    queries = [(int(cin[i]), int(cin[i+1]), int(cin[i+2])) for i in range(1, len(cin), 3)]
    
    max_n_m = 100000
    fact, inverse = calcFactdanInverse(max_n_m, MOD)
    
    result = solve(T, queries, fact, inverse)
    
    print(result)

if __name__ == "__main__":
    main()
