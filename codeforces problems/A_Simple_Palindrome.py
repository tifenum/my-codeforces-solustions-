def solve():
    n = int(input())  # Read the input value for n
    vowels = "aeiou"  # The string of vowels
    s = ""
    a=[1,1,1,1,1]
    # Append vowels in repeating sequence until string length is n
    for i in range(n-5):
        a[i%5]+=1
    for i in range(5):
        if(i<n):
            s+=vowels[i]*a[i]
    print(s)

def main():
    t = int(input())  # Read the number of test cases

    # Run the solve function for each test case
    for _ in range(t):
        solve()

if __name__ == "__main__":
    main()
