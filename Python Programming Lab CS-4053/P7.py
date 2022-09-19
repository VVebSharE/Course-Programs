#7. Write a Program to print prime numbers.
#Find its complexity
n=int(input("How many prime numbers you want to print :"))
i=2
plist=[]
while n>0:
    tag=1
    # print(plist)
    for x in plist:
        if x[0]==x[1]+1:
            tag=0
            x[1]=0
        else:
            x[1]+=1
    if(tag==1):
        print(i)
        plist+=[[i,0]]
        n-=1
    i+=1