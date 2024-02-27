#1번
print('=== 센티미터 -> 인치 변환 츠로그램 ===')

센티미터길이 = float(input('센티미터 입력: '))
인치길이 = round(센티미터길이/2.54, 2)
print(센티미터길이,"cm는", 인치길이, 'inch 입니다.')

#2번    
n=input('이름이 뭐에요? ')
a=input('몇 살이에요? ')
h=float(input('키가 몇이에요? '))

print('이름: ',n)
print('나이: ',a,'살')
print('키: ',round(h,2), 'cm')
