#11. Write a Program to print Fibonacci series.
upto=int(input("Print the fibonacci series upto :"))
a=int(input('Enter the first number of Fibonacci series :'))
b=int(input('Enter the second number of Fibonacci series :'))
while upto>0:
    print(a,end=', ')
    a,b=b,b+a
    upto-=1
