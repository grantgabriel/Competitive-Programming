from bisect import bisect_left

def num_lightbulbs(M, R, X):
    # First, we compute the intervals that each street light can cover
    intervals = []
    for x in X:
        left = max(0, x-R)
        right = min(M, x+R)
        intervals.append((left, right))
    
    # We sort the intervals by their left endpoint
    intervals.sort()
    
    # We keep track of the rightmost point that we have covered so far
    covered = 0
    # We keep track of the number of lightbulbs that we have installed
    num_bulbs = 0
    
    # We go through the intervals one by one, and if we encounter
    # an interval that is not covered by the previous lightbulbs, we
    # install a new one at its right endpoint.
    for left, right in intervals:
        if left > covered:
            return "IMPOSSIBLE"
        if right > covered:
            num_bulbs += 1
            covered = right
    return num_bulbs

# Read the number of test cases
T = int(input())

# Process each test case
for t in range(1, T+1):
    M, R, N = map(int, input().split())
    X = list(map(int, input().split()))
    result = num_lightbulbs(M, R, X)
    print(f"Case #{t}: {result}")