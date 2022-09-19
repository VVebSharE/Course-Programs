# 5. Write a Program to check if string is palindrome or not.
sr = input("Enter a string : ")
tag = 1
j=-1
for i in sr:
    j += 1
for i in sr:
    if sr[j] != i:
        tag = 0
        break
    j -= 1
if tag == 1:
    print("String is palindrome")
else:
    print("String is not palindrome")
