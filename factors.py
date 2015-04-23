factors = list()

number = int(input())

for i in range(2,number):
    while (number%i==0):
        factors+=[i]
        number/=i
        
if (number>1):
    factors+=[number]

for i in factors:
    print (i)
