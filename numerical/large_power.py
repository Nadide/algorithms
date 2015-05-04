a = float(input())
n = int(input())

l = [a];
p = 2
i = 0
while (p <= n):
    l += [ l[i]*l[i] ]
    p *= 2
    i += 1
    
p /= 2
psum = 0
result = 1.
while (psum!=n and i>=0):
    if (psum+p <= n):
        psum += p
        result *= l[i]
    p /= 2
    i -= 1
print ("%.f" %result)
