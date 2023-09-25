def get_nth_char(n):
    # calculate the length of the string up to the N-th character
    i = 0
    while True:
        len_so_far = (2**i - 1) * 26
        if len_so_far >= n:
            break
        i += 1
    len_before = (2**(i-1) - 1) * 26
    len_after = length - len_before - 26
    length = len_before + len_after
    
    # find the N-th character using modular arithmetic
    index = (n-1) % length
    return chr(ord('A') + (index % 26))

# main program
t = int(input())
for i in range(t):
    n = int(input())
    c = get_nth_char(n)
    print("Case #{}: {}".format(i+1, c))
