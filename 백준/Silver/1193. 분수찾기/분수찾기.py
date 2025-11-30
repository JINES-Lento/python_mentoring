n = int(input())

line = 1
# temp_line = 2
# min = 0

# result = ''

# for i in range(n):
#     if line == min:
#         line += 1
#         min = 1
#         temp_line = line

#     temp_line -= 1
#     min += 1

# if line % 2 == 0:
#     result = str(min) + '/' + str(temp_line)
# else:
#     result = str(temp_line) + '/' + str(min)

# print(result)

while n > line:
    n -= line
    line += 1

if line % 2 == 0:
    result = str(n) + '/' + str(line-n + 1)
else:
    result = str(line-n + 1) + '/' + str(n)

print(result)