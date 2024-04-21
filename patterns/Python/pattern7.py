"""
Generate the following pattern
      *           |      *
    * * *         |     *** 
  * * * * *       |    ***** 
* * * * * * *     |   ******* 
"""

def pattern7_1(n):
    for i in range(n):
        for j in range(2*(n-1-i)):
            print(" ", end="")
        for k in range(2*i+1):
            print("* ", end="")
        print("")
        
        
def pattern7_2(n):
    for i in range(n):
        for j in range(n-i-1):
            print(" ", end="")
        for k in range(2*i+1):
            print("*", end="")
        print("")
        

def main():
    i = int(input("Enter the number of rows: "))
    print("Here is the generated pattern\n")
    pattern7_1(i)
    print("")
    pattern7_2(i)
    
if __name__ == "__main__":
    main()