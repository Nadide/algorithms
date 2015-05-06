# Finding Prime Factors

def findfactors(number):

    factors = []
    
    for i in range(2,number):
        while (number%i==0):
            factors+=[i]
            number/=i
        
    if (number>1):
        factors+=[number]

    return factors
