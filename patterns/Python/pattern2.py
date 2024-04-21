"""
Generate the following pattern
*
* *
* * *
* * * *
* * * * *
"""

def pattern2(n):
    for i in range(n):
        for j in range(i+1):
            print("* ", end="")
        print("\n")
        

def main():
    i = int(input("Enter the number of rows: "))
    print("Here is the generated pattern\n")
    pattern2(i)
    
if __name__ == "__main__":
    main()