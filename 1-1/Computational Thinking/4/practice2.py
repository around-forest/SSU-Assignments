a = list([1,2,3,4,5])

print(a)
type(a)
#type 함수는 데이터 타입을 알려준다

a=list(range(10, 101, 10))
print(a)

for i in range(1, 21, 1) :
    if i%3==0 :
        print("박수")
    else :
        print(i)
print("종료합니다.")

#기본문
for n in range (1,11,1) :
    print("Count %d" %n)
print("종료합니다.")

#세번째 파라미터 생략
for n in range (1,11) :
    print("Count %d" %n)
print("종료합니다.")

#첫번째, 세번째 생략
for n in range (11) :
    print("Count %d" %n)
print("종료합니다.")
#0부터 시작하게된다

#횟수반복
for n in range (5) :
    print("Hello World")

