#include <memory.h>
#include <stdlib.h>
#include "stack/stack.hpp"
#include "lib/colorPrint.hpp"

int main()
{
    size_t size = 25;
    Stack_t stack = {};

    STACK_ASSERT(StackCtor(&stack, 1));

    double push = 1234.56789;
    double pop  = 0;
    STACK_ASSERT(StackPush(&stack, &push, sizeof(push)));
    STACK_ASSERT(StackPop (&stack, &pop,  sizeof(pop )));
    STACK_ASSERT(StackDtor(&stack));

    COLOR_PRINT(GREEN, "pop = '%f'\n", pop);

    return EXIT_SUCCESS;
}
