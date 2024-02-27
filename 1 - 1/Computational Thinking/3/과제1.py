while True :

    quiz=int(input("퀴즈 점수 : "))
    midt=int(input("중간고사 점수 : "))
    finalt=int(input("기말고사 점수 : "))

    score=(quiz*0.2)+(midt*0.3)+(finalt*0.5)

    if quiz>100 or midt>100 or finalt>100 :
        print("점수는 100점 만점입니다. 다시 입력하세요.")
        print("")
        continue

    else :

        if score>=70 :
                print("최종 점수 : %d" %score)
                print("PASS")
        else :
                print("최종 점수 : %d" %score)
                print("FAIL")

        break
