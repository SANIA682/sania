a=int(input("enter ur number:"))
def factorial (n):
    result = 1
    for i in range(1,n+1):
        result *=i
    return result
print("factorial of a:", factorial (a))
