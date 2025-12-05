def count_x(s):
    result = 0
    for i in range(len(s)):
        if s[i] == '.':
            break
        result += 1
    return result

def get_polyomino(n):
    mino = ['AAAA', 'BB']
    result = ''
    while n != 0:
        if n >= 4:
            result += mino[0]
            n -= 4
        else:
            result += mino[1]
            n -= 2
    return result

s = input()
poly = ''
i = 0

while (len(s) != len(poly)):
    if s[i] == '.':
        i += 1
        poly += '.'
        continue

    count = count_x(s[i:])
    if count % 2 != 0:
        poly = str(-1)
        break

    poly += get_polyomino(count)
    i += count

print(poly)