"""
Generate the following pattern
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
"""

def pattern4(n):
    for i in range(1,n+1):
        for j in range(i):
            print(i," ", end="")
        print("")
        
def main():
    i = int(input("Enter the number of rows: "))
    print("Here is the generated pattern\n")
    pattern4(i)
    
if __name__ == "__main__":
    main()