# Finding Prime Factors

def findfactors2(number):

    factors = []

    while (number%2 == 0):
        factors += [2]
        number /= 2

    i = 3
    max_factor = sqrt(number)
    while (i <= max_factor):
        while (number%i == 0):
            factors += [i]
            number /= i
        i += 2
        

    if (number > 1):
        factors += [number]

    return factors
