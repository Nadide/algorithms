import math

a = int(input())
n = int(input())

power = list()

if (n == 1):
    print (a)
else:
    p=2
    i=1
    power+=[a]
    while (p <= n):
        power += [power[i-1]*a]
        p*=2
        i+=1

    i-=1
    p=0
    result=1
    while (i>=0):
        pp=pow(2,i)
        if (p+pp <= n):
            p+= pp
            result*= power[i]
        i-=1
    print (result)
