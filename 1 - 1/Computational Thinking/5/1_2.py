#5번
def f(x):
    y=3*(x**2)+5*x+7
    return y

x1 = f(15) 
print("f(15) = ", x1)
x2 = f(20) 
print("f(20) = ", x2)
x3 = f(25) 
print("f(25) = ", x3)

#6번
def 삼각형의_넓이(base, height):
    area= base*height*(1/2)
    return area

base=int(input("밑변을 입렵하세요 : "))
height=int(input("높이를 입력하세요 : "))

넓이=삼각형의_넓이(base,height)
print("삼각형의 넓이 = ", 넓이)
