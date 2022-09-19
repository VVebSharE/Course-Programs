# 5. Write a Program to check if string is palindrome or not.
sr = input("Enter a string : ")
if sr == sr[::-1]:
    print("String is palindrome")
else:
    print("String is not palindrome")