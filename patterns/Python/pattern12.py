"""
Generate the following pattern
A
A B
A B C
A B C D
A B C D E 
"""

def pattern12(n):
    for i in range(1, n+1):
        for j in range(i):
            print(chr(65+j), end=" ")
            
        print("")
   
#Driver Code 
def main():
    n = int(input("Enter the number of rows: "))
    print("Here is the generated pattern\n")
    pattern12(n)
    
if __name__ == "__main__":
    main()
           