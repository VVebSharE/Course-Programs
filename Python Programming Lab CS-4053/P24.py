# 24. Write a Program to explain match and search functions. (Related to Regular Expressions)

intro=''
with open("P24_test.txt",'r') as f:
    for lines in f:
        intro+=lines

#Regexes provide a powerful way to search and manipulate strings available through the re module
import re
p_no=re.compile(r'\d{10}')
e_m=re.compile(r'[a-zA-Z0-9]+@[a-z]+.com')
dates=re.compile(r'\d\d/\d\d/\d\d\d\d')
name=re.compile(r'I am ([A-Z][a-z]*)')
# Some special characters:
        # [abc] : Square brackets indicate set of characters
                #   this will match any one of the chars. a, b or c same as [a-c]
        # . : a period match any single charater except newline
        # ^ : match start of the string or immediately after each newline(in multiline mode) (has no meaning if not the first character in the character set)
        # $ : match the end of the string or just before the newline
        # * : match pervious expression 0 or more times
        # + : match the preceding expression 1 or more times
        # ? : match the prededing expression 0 or 1 times (if used immediately after *,+, or {} makes them non-greedy)
        # \d: match any decimal digit[0-9]
        # \D: match any non-digit[^0-9]
        # \w: match a word character[a-zA-Z0-9]
        # \W: match any non-word character[^A-Za-z0-9]
        # \s: match single whitespace characer(space, newline, tab)[\n\t\f]
        # \S: match any non whitespace[^\n\t\f]
        # \b: match a word boundary //leave it
        # \B: mathes a non-word boundary
        # \ : make next non-special character special
        # {m,n}: m<=n, math atleast m and at most n occureances of the preceding expression
        # {m}  : matches exactly m occurences of the preceding expression m>=1
        # |: A|B match 'A' or 'B'

        # 'r' prefix make expression a raw string, init escape sequences are not parsed.
        # (regex) regex inside parantheses matches a substring will be remembered called group
print("Phone no. :",p_no.findall(intro)[0])
print("Email address :",e_m.search(intro).group())
print("Dob :",intro[dates.search(intro).start() : dates.search(intro).end()])
print("Name :",name.match(intro).group(1))