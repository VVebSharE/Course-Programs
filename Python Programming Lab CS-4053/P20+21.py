# 20. Write a Program to sort the list entered by the user.
# 21. Write a Program to delete and update the element in list.
mylist=[]
while True:
    try:
        mylist.append(int(input("enter a number in list :")))
    except:
        break
mylist.sort()
print("sorted list:"+str(mylist))
while True:
    try:
        choice=int(input("Enter 1 to update \nEnter 2 to delete an element from list:"))
        if(choice==1):
            num=int(input("Enter the value to be updated"))
            num2=int(input(f"Enter the value to update {num}"))
            mylist.remove(num)
            mylist.append(num2)
            #see for a function to replace all occurence of num with num2
        else:
            num=int(input("Enter the value to be deleted"))
            mylist.remove(num)
    except:
        break
print("now the list is",mylist)