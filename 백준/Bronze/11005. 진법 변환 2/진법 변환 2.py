def one_format(n):
    if n >= 10:
        return chr(n+55)
    return n

def list_to_str(l):
    result = ''
    for i in range(len(l)):
        result += str(l[i])
    return result

def revert(l):
    result = []
    for i in range(1, len(l)+1):
        result.append(l[-i])
    return result

def b_format(b, n):
    result = []

    while n >= b:
        f_num = n % b
        n //= b


        result.append(one_format(f_num))
    result.append(one_format(n))
    result = revert(result)
    return list_to_str(result)

n, b = map(int, input().split())

print(b_format(b,n))