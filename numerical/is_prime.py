import random

def IsPrime (p,max_tests):
    
    test = 1
    while (test <= max_tests):
        n = random.randint(1,p-1)
        if (pow(n,p-1)%p != 1):
            return False
        test +=1        
    return True
