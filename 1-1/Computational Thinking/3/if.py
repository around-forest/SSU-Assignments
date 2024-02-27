print("점수를 입력하세요 : ", end="")
score=int(input())

if score>=90 :
    print("장학금 대상자입니다.")
else :
    print("장학금 대상자가 아닙니다.")
print("수고하셨습니다.")

print("")

print("지금 몇시인가요? ", end="")
time=int(input())
before=int(time-6)
after=int(24+time-6)
if time>=6 :
    print("현재 시간: %d시" %time)
    print("이전 시간: %d시" %before)
else :
    print("현재 시간: %d시" %time)
    print("이전 시간: %d시" %after)
    
print("")

print("점수를 입력하세요 : ", end="")
score = int(input())
if score>=70 :
    print("")
else :
    print("Fail입니다.")

print("")

import sys

print("===짝수홀수 판별 프로그램===")
print("정수를 입력하세요: ", end="")
num=int(input())
if num>0 :
    print("정수 %d를 입력했군요" %num)
    if (num%2)==0 :
        print("당신이 입력한 수는 짝수입니다.")
    else :
        print("당신이 입력한 수는 홀수입니다.")
else :
    print("판별할 수 없는 수를 입력하셨습니다.")
    print("양의 정수만 짝수/홀수 판별 가능합니다.")
    print("프로그램을 종료합니다")
    sys.exit()

print("")
    
score=int(input("시험 점수를 입력하세요 : "))
if score>=90 :
    print("A학점입니다.")
elif score>=80 :
    print("B학점입니다.")
elif score>=70 :
    print("C학점입니다.")
else :
    print("재수강하세요.")

print("")

year=int(input("년도 입력 : "))

if year%400==0 :
    print("%d년은 윤년입니다." %year)
elif year%100==0 :
    print("%d년은 윤년이 아닙니다." %year)
elif year%4==0 :
    print("%d년은 윤년입니다." %year)
else :
    print("윤년이 아닙니다.")

print("프로그램을 종료합니다.")
