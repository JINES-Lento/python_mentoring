n = int(input())

n_list = int(input())

sum = 0
for i in range(n):
    sum += n_list % 10
    n_list //= 10

print(sum)