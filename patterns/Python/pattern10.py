"""
Generate the following pattern
1                 1
1 2             2 1
1 2 3         3 2 1
1 2 3 4     4 3 2 1
1 2 3 4 5 5 4 3 2 1
"""

def pattern10(n):
    for i in range(1, n+1):
        for j in range(1, i+1):
            print(j, end=" ")
            
        for j in range(4*(n-i)):
            print(" ", end="")
            
        for j in range(i, 0, -1):
            print(j, end=" ")
                    
        print("")
    
def main():
    n = int(input("Enter the number of rows: "))
    print("Here is the generated pattern\n")
    pattern10(n)
    
if __name__ == "__main__":
    main()
           