def factorial(number):
    
    if(number == 1):    #Base condition, gives this function a way to stop.
        return 1
    else:
        return (number * factorial(number-1))

def main():
    # Note: The python interpreter limits recursion stack to 1000 to prevent infinite loops
    # Maximum number for a factorial in this program is 997, 3 less than thousand
    # Possible Explanation: Main Program, main() and factorial(number) make up the 3 on the call stack
    print(factorial(997))

if __name__ =="__main__":
    main()