import time
def GcdAlgo1(n1,n2): 
    gcd = 1       
    for t in range(2, n1+1,1) :
        if (n1%t == 0) and (n2%t == 0) :
            gcd = t
    return gcd

def GcdAlgo2(a,b) :
        while 1:
            if a==b:
                return a
                break
            else :
                if a>b: a = a-b
                else: b = b-a

a = int(input("두 수 중 작은 수 A: "))
b = int(input("두 수 중 큰은 수 B: "))
sTime1 = time.time()
result1 = GcdAlgo1(a,b)
eTime1 = time.time();dTime1 = eTime1 - sTime1

sTime2 = time.time()
result2 = GcdAlgo2(a,b)
eTime2 = time.time(); dTime2 = eTime2 - sTime2

print("알고리즘1: 결과값 %d, 수행시간 %.5f" %(result1, dTime1))
print("알고리즘2: 결과값 %d, 수행시간 %.5f" %(result2, dTime2))
