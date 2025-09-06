class FenwickTree:
    def __init__(self, n):
        self.size = n
        self.tree = [0] * (n + 1)
    
    def baharui(self, index, d):
        while index <= self.size:
            self.tree[index] += d
            index += index & -index
    
    def q(self, index):
        sum = 0
        while index > 0:
            sum += self.tree[index]
            index -= index & -index
        return sum
    
    def range_q(self, l, r):
        return self.q(r) - self.q(l - 1)

def prun(arr):
    s = sorted(set(arr))
    rankMap = {v: i + 1 for i, v in enumerate(s)}
    return [rankMap[v] for v in arr]

def hitungNabrak(N, M, rute):
    total = 0

    for j in range(M - 1):
        fenwick = FenwickTree(N)
        
        col_curr = prun([rute[i][j] for i in range(N)])
        col_next = prun([rute[i][j+1] for i in range(N)])

        rank = [0] * N
        for i in range(N):
            rank[col_curr[i] - 1] = col_next[i]

        for i in range(N - 1, -1, -1):
            total += fenwick.q(rank[i] - 1)
            fenwick.baharui(rank[i], 1)

    return total

N, M = map(int, input().split())
rute = [list(map(int, input().split())) for _ in range(N)]

print(hitungNabrak(N, M, rute))
