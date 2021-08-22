from math import gcd
a, b = map(int, input().split('/'))
c = (a*45 - 1440*b)/(81*b)

a_c = a*45 - 1440*b
b_c = 81*b

gcd1 = gcd(a_c, b_c)

a_c /= gcd1
b_c /= gcd1

a_c = int(a_c)
b_c = int(b_c)

print(str(a_c)+'/'+str(b_c))
