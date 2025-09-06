def solve(N, M, A, B):
    awal = sum((A[i] % M) * B[i] for i in range(N))
    maxV = awal
    
    curr = awal
    for k in range(1, M):
        temp = 0
        for i in range(N):
            nextV = (A[i] + k) % M
            prevV = (A[i] + k - 1) % M
            temp += (nextV - prevV) * B[i]
        curr += temp
        maxV = max(maxV, curr)
    
    return maxV

N, M = map(int, input().split())
A = list(map(int, input().split()))
B = list(map(int, input().split()))

print(solve(N, M, A, B))
