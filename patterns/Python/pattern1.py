"""
Pattern to Generate

* * * * *
* * * * *
* * * * *
* * * * *

"""

def pattern_generator(n):
    for i in range(n):
        for j in range(n):
            print("* ", end="")
        print("\n")
    
def main():
    i = int(input("Enter the size for the pattern: "))
    print("Here is the generated pattern\n")
    pattern_generator(i)
    
if __name__ == "__main__":
    main()