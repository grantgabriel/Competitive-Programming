def min_changes(c):
    n = len(c)
    count = 0
    for i in range(n):
        if c[i] == c[(i+1)%n]:
            count += 1
            if c[i] == 'R':
                if c[(i+2)%n] == 'P':
                    c[(i+1)%n] = 'S'
                else:
                    c[(i+1)%n] = 'P'
            elif c[i] == 'P':
                if c[(i+2)%n] == 'R':
                    c[(i+1)%n] = 'S'
                else:
                    c[(i+1)%n] = 'R'
            else:
                if c[(i+2)%n] == 'R':
                    c[(i+1)%n] = 'P'
                else:
                    c[(i+1)%n] = 'R'
    return count

t = int(input())
for i in range(t):
    c = input().strip()
    c = list(c)
    count = min_changes(c)
    print("Case #{}: {}".format(i+1, count))