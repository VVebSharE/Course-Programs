# 17. Write a Program to explain method overloading and method overriding.
#make it better like pure virtual class in c++ or java 


#There is no default way of method overloading in python
def hi(name=None):
        if(name==None):
            print("hi")
        else:
            print(f"hi {name}")
hi()
hi("Vaibhav")

#Overriding not making any sense here
class A:
    def hi(self,name):
        print(f"hi from A to {name}")
class B(A):
    def hi(self,name=None):
        print(f"hi from B to {name}")
b=B()
b.hi("Vaibhav")
A.hi(b,"VVeb")