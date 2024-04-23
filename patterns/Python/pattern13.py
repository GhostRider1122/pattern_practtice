"""
Generate the following pattern
A B C D E 
A B C D
A B C
A B 
A 
"""

def pattern12(n):
    for i in range(n):
        for j in range(n-i):
            print(chr(65+j), end=" ")
            
        print("")
   
#Driver Code 
def main():
    n = int(input("Enter the number of rows: "))
    print("Here is the generated pattern\n")
    pattern12(n)
    
if __name__ == "__main__":
    main()
           