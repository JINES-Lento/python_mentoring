# import numpy as np

n = int(input())
p = list(map(int, input().split()))

time = 0

p.sort()

# time = 0
# for i in range(n + 1):
#     for j in range(i):
#         time += p[j]
# print(time)

n_time = 0
for i in range(n):
    n_time += p[i] * (n-i)
print(n_time)

# np_p = np.array(p)

# for i in range(n):
#     min = np_p.min()
#     min_index = np_p.argmin()

#     np_p = np.delete(np_p, min_index)

#     np_p += min
#     time += min
#     print(time)

# print(time)

