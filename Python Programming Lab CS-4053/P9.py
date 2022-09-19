#9. Write a Program to find factorial of given number.
num=int(input("Enter a number :"))
fact=1
for i in range(1,num+1):
    fact*=i
print(f'factorial of {num} = {fact}')
