# Finding Greatest Common Divisiors

def gcd(a,b):
    while (b != 0):
        mod = a%b
        a = b
        b = mod
    return a

