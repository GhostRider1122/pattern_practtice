"""
Generate the following pattern
*
* *
* * *
* * * *
* * * * *
* * * *
* * *
* *
*
"""

def pattern8(n):
    for i in range(1, n+1):
        for j in range(i):
            print("* ",end="")
        print("")
    
    for i in range(n+1, 2*n):
        for j in range(2*n-i):
            print("* ",end="")
        print("")
    
def main():
    n = int(input("Enter the number of rows: "))
    print("Here is the generated pattern\n")
    pattern8(n)
    
if __name__ == "__main__":
    main()
           