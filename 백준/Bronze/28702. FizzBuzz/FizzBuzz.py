def find_int_index(n):
    for i in range(len(n)):
        if n[i].isdigit():
            return i
    return -1

l = []
for i in range(3):
    l.append(input())

index = find_int_index(l)



n = int(l[index]) + (3 - index)

result = ''
if n % 3 == 0:
    result = 'Fizz'
    if n % 5 == 0:
        result += 'Buzz'

elif n % 5 == 0:
    result = 'Buzz'

else:
    result = str(n)

print(result)