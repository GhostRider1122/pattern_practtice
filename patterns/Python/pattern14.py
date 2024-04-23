"""
Generate the following pattern
     A
    ABA
   ABCBA
  ABCDCBA
 ABCDEDCBA
"""

def pattern14(n):
    for i in range(1, n+1):
        for j in range(n-i):
            print(" ", end="")
        
        cnt = 0
        for j in range(2*i-1):
            print(chr(65+cnt), end="")
            if j < (2*i-1)//2:
                cnt += 1
            else:
                cnt -= 1
                
        print("")
   
#Driver Code 
def main():
    n = int(input("Enter the number of rows: "))
    print("Here is the generated pattern\n")
    pattern14(n)
    
if __name__ == "__main__":
    main()
           