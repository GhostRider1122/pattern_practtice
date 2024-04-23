"""
Generate the following pattern
1
2 3
4 5 6
7 8 9 10 
11 12 13 14 15 
"""

def pattern11(n):
    count = 1
    for i in range(1, n+1):
        for j in range(1, i+1):
            print(count, end=" ")
            count += 1 
                             
        print("")
    
def main():
    n = int(input("Enter the number of rows: "))
    print("Here is the generated pattern\n")
    pattern11(n)
    
if __name__ == "__main__":
    main()
           