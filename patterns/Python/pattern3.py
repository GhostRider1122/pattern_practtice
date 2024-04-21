"""
Generate the following pattern
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
"""

def pattern3(n):
    for i in range(1,n+1):
        for j in range(i):
            print(j+1," ", end="")
        print("")
        
def main():
    i = int(input("Enter the number of rows: "))
    print("Here is the generated pattern\n")
    pattern3(i)
    
if __name__ == "__main__":
    main()