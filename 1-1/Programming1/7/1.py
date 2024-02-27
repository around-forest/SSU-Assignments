n=int(input("정수를 입력하세요: "))
int (a=1)
int (b=0)
if n<=0:
    print("양의 정수를 입력하세요.")
else:
    while a<=n:
        if a%2==0:
            b+=a
            break
        else:
            a+1
print(b)
