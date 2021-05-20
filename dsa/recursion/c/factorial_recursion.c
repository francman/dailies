#include <stdio.h>

// Function Prototypes
int factorial(int number);

// Entry
int main()
{
    printf("%d\n", factorial(3));
    return 0;
}

// Factorials
int factorial(int number)
{
    if (number == 1 || number == 0)            // Base condition, stops the recursion if the received number is 1
    {
        return 1;
    }
    else
    {
        return (number * factorial(number -= 1));
    }
}
