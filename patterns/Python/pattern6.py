"""
Generate the following pattern
1 2 3 4 5
1 2 3 4 
1 2 3 
1 2
1
"""

def pattern6(n):
    for i in range(n):
        for j in range(1, n+1-i):
            print(j, " ", end="")
        print("")
        

def main():
    i = int(input("Enter the number of rows: "))
    print("Here is the generated pattern\n")
    pattern6(i)
    
if __name__ == "__main__":
    main()