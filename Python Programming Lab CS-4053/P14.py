#14. Write a Program showing concept of ‘Scope of Variable’.
#in python we have two scopes: global and local
var=1
var2=2
def fun():
    global var
    var="one"
    var2="two"
    print(f"in outer function {var} {var2}")
    def innerfun():
        var="two"
        global var2
        var2="three"
        print(f"in inner function {var} {var2}")
    innerfun()
    print(f"in outer function {var} {var2}")
print(f"in global scope {var} {var2}")
fun()
print(f"in global scope {var} {var2}")