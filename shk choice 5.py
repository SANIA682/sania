n=int(input("enter ur number:"))
def fibonacci (n):
    a,b=0,1
    for _ in range(n):
        print(a, end=" ")
        a, b = b, a + b

fibonacci(n)        
