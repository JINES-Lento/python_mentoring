def make_new_num(N, N_len):
    flag = 0
    if (N < 10):
        N *= 10
        N_len += 1
        flag = 1

    new_num = 0
    for i in range(N_len - 1):
        new_num += N // (10 ** (i+1))
        new_num += N % (10 ** (i+1))
    
    if (flag):
        new_num = (new_num % 10 ** (N_len -1)) + (((N // 10 ** (N_len -1))) * (10 ** (N_len -1)))
    else:
        new_num = (new_num % 10 ** (N_len -1)) + (((N % 10 ** (N_len -1))) * (10 ** (N_len -1)))
    return new_num

N = int(input())

N_len = len(str(N))

new_num = -1
cycle = 1

new_num = make_new_num(N, N_len)
# print(new_num)
while (N != new_num):
    new_num_len = len(str(new_num))
    new_num = make_new_num(new_num, new_num_len)
    # print(new_num)
    cycle += 1

print(cycle)