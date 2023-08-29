a, r, n = input().split()

a = int(a)
r = int(r)
n = int(n)

sum = a
for i in range(1, n):
    sum = sum * r

print(sum)
