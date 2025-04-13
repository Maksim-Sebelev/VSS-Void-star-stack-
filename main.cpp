#include <memory.h>
#include <stdlib.h>
#include "stack/stack.hpp"
#include "lib/colorPrint.hpp"

int main()
{
    Stack_t stack = {};
    double  push  = 1234.56789;
    double  pop   = 0;

    STACK_ASSERT(StackCtor(&stack, 1));
    STACK_ASSERT(StackPush(&stack, &push, sizeof(push)));
    STACK_ASSERT(StackPop (&stack, &pop,  sizeof(pop )));
    STACK_ASSERT(StackDtor(&stack));

    COLOR_PRINT(GREEN, "pop = '%f'\n", pop);

    return EXIT_SUCCESS;
}
