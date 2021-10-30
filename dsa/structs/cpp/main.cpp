#include <iostream>
#include <string>

using namespace std;

struct person
{
    string first_name;
    string last_name;
    int age;
};
typedef struct person Person;

int main()
{
    Person desmond;
    
    desmond.first_name = "Desmond";
    desmond.last_name = "Tutu";
    desmond.age = 90;

    return 0;
}