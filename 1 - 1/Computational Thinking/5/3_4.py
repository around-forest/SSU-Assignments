#7번
def 학점(x):
    if x>=90:
        print("당신의 학점: A")
    elif x>=80:
        print("당신의 학점: B")
    elif x>=70:
        print("당신의 학점: C")
    elif x>=60:
        print("당신의 학점: D")
    elif x>=50:
        print("당신의 학점: E")
    else :
        print("당신의 학점: F")
    return 0

x=int(input("점수를 입력하세요 : "))
학점(x)

#8번
def 짝홀(x):
    if x%2==0:
        print("짝수입니다.")
    else:
        print("홀수입니다.")

x=int(input("정수를 입력하세요 : "))
짝홀(x)
