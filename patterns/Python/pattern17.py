"""
Generate the following pattern
4444444
4333334
4322234
4321234
4322234
4333334
4444444
"""

def pattern16(n):
    for i in range(2*n-1):
        for j in range(2*n-1):
            top = i
            left = j
            right = 2*(n-1)-j
            bottom = 2*(n-1)-i
            
            ans = min(top, bottom, left, right)
            print(n-ans, end="")
                   
        print("")
   
#Driver Code 
def main():
    n = int(input("Enter the number of rows: "))
    print("Here is the generated pattern\n")
    pattern16(n)
    
if __name__ == "__main__":
    main()
           