# Performing Exponentiation

'''
Calculate a to the power n
'''

def large_power(a,n):
    plist = [a];
    power = 2
    i = 0
    while (power <= n):
        plist += [ plist[i]*plist[i] ]
        power *= 2
        i += 1
    
    power /=2
    psum = 0
    result = 1.
    while (psum!=n and i>=0):
        if (psum+power <= n):
            psum += power
            result *= plist[i]
        power /= 2
        i -= 1

    return result

