#include <stdlib.h>
#include "stack/stack.hpp"
#include "lib/lib.hpp"

struct exp
{
    int a;
    double b;
    size_t c;
    char d;
    unsigned short e;
};

void print_exp(exp a)
{
    COLOR_PRINT(GREEN, "\na = %d\nb = %f\nc = %lu\nd = %d\ne = %d\n", a.a, a.b, a.c, a.d, a.e);
}

int main()
{
    Stack_t stack = {};
    double  push  = 131416.4521;
    double  pop   = 0;

    exp push2 = {1, 2.78132, 3, 4, 5};
    exp pop2  = {};

    exp push3 = {5, 4, 3, 2, 1};
    exp pop3 = {};

    STACK_ASSERT(StackCtor(&stack, 1                    ));
    STACK_ASSERT(StackPush(&stack, &push2, sizeof(push2))); // push 2
    STACK_ASSERT(StackPush(&stack, &push,  sizeof(push ))); // push 1
    STACK_ASSERT(StackPush(&stack, &push2, sizeof(push2))); // push 2
    STACK_ASSERT(StackPush(&stack, &push3, sizeof(push3))); // push 3
    
    STACK_ASSERT(StackPop (&stack, &pop3,  sizeof(pop3 ))); // pop 3
    print_exp(pop3); printf("\n");

    STACK_ASSERT(StackPop (&stack, &pop2,  sizeof(pop2 ))); // pop 2
    print_exp(pop2); printf("\n");

    STACK_ASSERT(StackPop (&stack, &pop,   sizeof(pop  ))); // pop 1
    COLOR_PRINT(GREEN, "pop = '%f'\n", pop);

    STACK_ASSERT(StackPop (&stack, &pop2,  sizeof(pop2 ))); // pop 2
    print_exp(pop2); printf("\n");
        
    STACK_ASSERT(StackDtor(&stack                       )); 

    return EXIT_SUCCESS;
}
