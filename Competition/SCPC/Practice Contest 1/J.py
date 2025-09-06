import sys

def AMANLAE(grid, r, c, N, M, char):
    cnt = 0
    for j in range(M):
        if grid[r][j] == char:
            cnt += 1
            if cnt == 2:
                if (j + 1 < M and grid[r][j + 1] == char) or (j - 2 >= 0 and grid[r][j - 2] == char):
                    return False
        else:
            cnt = 0

    cnt = 0
    for i in range(N):
        if grid[i][c] == char:
            cnt += 1
            if cnt == 2:
                if (i + 1 < N and grid[i + 1][c] == char) or (i - 2 >= 0 and grid[i - 2][c] == char):
                    return False
        else:
            cnt = 0

    cnt = 0
    for i in range(-min(r, c), min(N - r, M - c)):
        if grid[r + i][c + i] == char:
            cnt += 1
            if cnt == 2:
                if (r + i + 1 < N and c + i + 1 < M and grid[r + i + 1][c + i + 1] == char) or (r + i - 2 >= 0 and c + i - 2 >= 0 and grid[r + i - 2][c + i - 2] == char):
                    return False
        else:
            cnt = 0

    cnt = 0
    for i in range(-min(r, M - c - 1), min(N - r, c + 1)):
        if grid[r + i][c - i] == char:
            cnt += 1
            if cnt == 2:
                if (r + i + 1 < N and c - i - 1 >= 0 and grid[r + i + 1][c - i - 1] == char) or (r + i - 2 >= 0 and c - i + 2 < M and grid[r + i - 2][c - i + 2] == char):
                    return False
        else:
            cnt = 0

    return True

def maen():
    N, M = map(int, input().split())
    grid = [['.' for _ in range(M)] for _ in range(N)]

    for _ in range(N * M):
        char = input().strip()

        for r in range(N):
            for c in range(M):
                if grid[r][c] == '.' and AMANLAE(grid, r, c, N, M, char):
                    grid[r][c] = char
                    print(r + 1, c + 1)
                    sys.stdout.flush()
                    break
            else:
                continue
            break

if __name__ == "__main__":
    maen()
