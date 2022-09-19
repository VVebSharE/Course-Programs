# 4. Write a Program to perform basic calculator operations.
a = int(input("Enter first no :"))
b = int(input("Enter second no :"))
o = int(input("Enter the operation(sub 1, add 2, mul 3, div 4 ):"))
if o == 1:
    print(f'{a}-{b} = {a - b}')
elif o == 2:
    print(f'{a}+{b} = {a + b}')
elif o == 3:
    print(f'{a}*{b} = {a * b}')
elif o == 4:
    print(f'{a}/{b} = {a / b}')
