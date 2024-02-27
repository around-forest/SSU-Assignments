height = float(input("키를 입력하세요 : "))
weight = float(input("몸무게를 입력하세요 : "))
standardw = (height - 100) * 0.9
health = weight / standardw * 100

print("")
print("표준 몸무게 : %.2f입니다" %standardw)
print("")

if health < 85:
    print("비율 : 85% 미만")
    print("판단 : 저체중")
    print("진단 : 제 때에 많이 먹고 운동도 하세요.")
elif health >= 85 and health < 115:
    print("비율 : 85% 이상 ~ 115% 미만")
    print("판단 : 정상 몸무게")
    print("진단 : 지금 체중을 잘 유지하세요.")
elif health >= 115 and health < 130:
    print("비율 : 115% 이상 ~ 130% 미만")
    print("판단 : 과체중")
    print("진단 : 약간 살이 쪘네요. 주 2일은 운동하세요.")
elif health >= 130:
    print("비율 : 130% 이상")
    print("판단 : 비만")
    print("진단 : 식사량을 줄이고 주 3일 이상 운동하세요.")
else :
    print("")
