n = int(input())

num_list = list(map(int, input().split(' ')))

min = max = num_list[0]

for i in range(1, n):
    if (min >= num_list[i]):
        min = num_list[i]

    if (max <= num_list[i]):
        max = num_list[i]

print(min, max)