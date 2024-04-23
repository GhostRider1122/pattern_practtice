"""
Generate the following pattern
* * * * * * * * * *
* * * *     * * * *
* * *         * * *
* *             * *
*                 *
*                 *
* *             * *
* * *         * * *
* * * *     * * * *
* * * * * * * * * *
"""

def pattern15(n):
    for i in range(1, n+1):
        for j in range(n+1-i, 0, -1):
            print("*", end=" ")
            
        for j in range(4*(i-1)):
            print(" ", end="")
            
        for j in range(n+1-i, 0, -1):
            print("*", end=" ")
                        
        print("")
        
    for i in range(1, n+1):
        for j in range(1, i+1):
            print("*", end=" ")
            
        for j in range(4*(n-i)):
            print(" ", end="")
            
        for j in range(i, 0, -1):
            print("*", end=" ")
                        
        print("")
   
#Driver Code 
def main():
    n = int(input("Enter the number of rows: "))
    print("Here is the generated pattern\n")
    pattern15(n)
    
if __name__ == "__main__":
    main()
           