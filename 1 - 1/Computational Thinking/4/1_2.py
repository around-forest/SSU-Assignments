#1번 while문
import sys
n=int(input("한자리 양의 정수를 입력하시오 : "))
i=1

while i<=9: 
    if 2<=n<=9:
        print("%d * %d = %d" %(n, i, n*i))
        i+=1
    else:
        print("잘못된 값이 입력되었습니다.")
        sys.exit()

#1번 for문
import sys
n=int(input("한자리 양의 정수를 입력하시오 : "))

for i in range(1,10,1): 
    if 2<=n<=9:
        print("%d * %d = %d" %(n, i, n*i))
        
    else:
        print("잘못된 값이 입력되었습니다.")
        sys.exit()        
        
#2번
n=30
i=[]
while n<=70:
    if n%3==0:
        i.append(n)
    n+=1
a=sum(i)
print(a)
