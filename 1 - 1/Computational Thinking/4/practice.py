import time

n=1
while n <=5 :
    print("파이썬 재밌네", n)
    time.sleep(1)
    n+=1
print("파이썬 쉽네")

n=10
while n <= 100 :
    print(n)
    time.sleep(0.5)
    n=n+10
print("숫자 세기 끝")

print("구구단 3단")
n=1
while n<=9:
    print("3 * %d = %d" %(n, n*3))
    n+=1
# shift + tab 은 여러줄의 탭을 한번에 지운다
# ctrl + i 는 도움말
# while - 간단
# for - 간결, 확장성
