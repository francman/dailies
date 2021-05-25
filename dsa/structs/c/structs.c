#include <stdio.h>
#include <stdlib.h>

struct person
{
    char first_name[10];
    char last_name[10];
    int age;
};

typedef struct person Person;

int main(int argc, char * argv[])
{
    Person Johnson;
    Johnson.age = 10;
    
    return 0;
}