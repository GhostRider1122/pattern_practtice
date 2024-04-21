"""
Generate the following pattern
* * * * *
* * * *
* * *
* *
*
"""

def pattern5(n):
    for i in range(n):
        for j in range(n,i,-1):
            print("* ", end="")
        print("")
        

def main():
    i = int(input("Enter the number of rows: "))
    print("Here is the generated pattern\n")
    pattern5(i)
    
if __name__ == "__main__":
    main()