# 19. Write a Program to explain User-Defined Exception.
class NotNumber(Exception):
    def __init__(self):
        print("you not entered a number")
try:
    num=input("Enter a number : ")
    if (not(num.isdigit())):
            raise(NotNumber())
    else:
        num=int(num)
except NotNumber:
    num=0
finally:
    print("value of num :",num)