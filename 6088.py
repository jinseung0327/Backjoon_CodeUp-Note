a, d, n = input().split()
a = int(a)
d = int(d)
n = int(n)

sum = a
for i in range(1, n + 1):
    sum = sum + d

print(sum - d)
