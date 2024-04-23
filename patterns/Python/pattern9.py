"""
Generate the following pattern
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
"""

def pattern9(n):
    for i in range(1, n+1):
        if i%2 != 0:
            for j in range(i):
                if j%2 == 0:
                    print("1", end=" ")
                else:
                    print("0", end=" ")
                    
        else:
            for j in range(i):
                if j%2 != 0:
                    print("1", end=" ")
                else:
                    print("0", end=" ")
                    
        print("")
    
def main():
    n = int(input("Enter the number of rows: "))
    print("Here is the generated pattern\n")
    pattern9(n)
    
if __name__ == "__main__":
    main()
           