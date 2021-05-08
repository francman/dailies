#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

// constants & macros
#define STACK_LENGTH 11
#define EMPTY (-1)
#define STACK_EMPTY INT_MIN

struct stack{
    int stack[STACK_LENGTH];
    int top;
};

typedef struct stack Stack;

// function prototypes
bool push(int value, int *top, int *stack);
int pop(int *top, int *stack);
void hold_exit(void);


//
int main(int argc, char *argv[])
{
    Stack mystack;
    mystack.top = EMPTY;
    bool is_successful = false;

    for(int i = 0; i< 100; i++)
    {
        is_successful = push(i, &mystack.top, mystack.stack);
        if(!is_successful)
        {
            break;
        }
    }

    while (mystack.top != EMPTY)
    {
        printf("%d\n", pop(&mystack.top, mystack.stack));
    }
    hold_exit();
    return 0;
}

// This function prevents session from exiting until any key is pressed.
// @parm
void hold_exit(void)
{
    char key_stroke;
    printf("Press any key to exit");
    scanf("%c", &key_stroke);
}

bool push(int value, int *top, int *stack)
{
    if(*top >= STACK_LENGTH)
    {
        return false;
    }

    (*top)++;
    stack[*top] = value;
    
    return true;
}

int pop(int *top, int *stack)
{
    int result;

    //if stack is empty return
    if(*top == EMPTY)
    {
        return STACK_EMPTY;
    }
    result = stack[*top];
    *top -= 1;
    // return topmost item
    return result;
}