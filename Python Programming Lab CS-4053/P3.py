# 3. Write a program to swap two numbers.
a = int(input("Enter first no a:"))
b = int(input("Enter second no b:"))
print("Before swap")
print("a :", a)
print("b :", b)

c=a
a=b
b=c
print("After swap")
print("a :", a)
print("b :", b)

a, b = b, a
print("After swap")
print("a :", a)
print("b :", b)

a=a+b
b=a-b
a=a-b
print("After swap")
print("a :", a)
print("b :", b)

a=a^b
b=a^b
a=a^b
print("After swap")
print("a :", a)
print("b :", b)