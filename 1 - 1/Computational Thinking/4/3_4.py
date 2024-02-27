#3번
n=0
for i in range(50,101,1):
    if i%3==0 or i%5==0:
        n=n+i
print(n)        

#4번
n=[]
while 1:
    fruit=input("좋아하는 과일을 입력하세요 : ")
    if fruit==str(0):
        print("과일입력 종료")
        break
    n.append(fruit)
    print(n)

