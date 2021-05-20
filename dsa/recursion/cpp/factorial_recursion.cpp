#include <iostream>

//
using namespace std;

// Function Prototypes
int factorial(int number);

// Program Entry
int main()
{
    int number;
    cout<< "Enter a number: ";
    cin>>number;
    cout << factorial(number) << endl;
    return 0;
}

// Factorial Function
int factorial(int number)
{
    if(number == 1 || number ==0 )  //Base Condition for recursive function
    {
        return 1;
    }
    else
    {
        return (number * factorial(number -= 1));
    }
}