import heapq

def f(x, M):
    return x - (x // M) * M

def solve(N, M, A):
    pq = []
    vis = [False] * N
    total = 0

    heapq.heappush(pq, (0, 0))

    while pq:
        w, u = heapq.heappop(pq)
        if vis[u]:
            continue
        vis[u] = True
        total += w

        for v in range(N):
            if not vis[v]:
                w1 = f(A[u] - A[v], M)
                w2 = f(A[v] - A[u], M)
                min_w = min(w1, w2)
                heapq.heappush(pq, (min_w, v)) 

    return total

N, M = map(int, input().split())
A = list(map(int, input().split()))

print(solve(N, M, A))
