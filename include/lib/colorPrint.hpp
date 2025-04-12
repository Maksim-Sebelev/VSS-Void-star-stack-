#ifndef COLOR_PRINT_HPP
#define COLOR_PRINT_HPP

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#include <stdio.h>

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#define RESET   "\x1b[0m"
#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define YELLOW  "\e[0;33m"
#define BLUE    "\e[0;34m"
#define VIOLET  "\e[0;35m"
#define CYAN    "\e[0;36m"
#define WHITE   "\e[0;37m"

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#define COLOR_PRINT(COLOR, ...) do  \
{                                    \
    printf(COLOR);                    \
    printf(__VA_ARGS__);               \
    printf(RESET);                      \
} while (0)                              \

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#endif //COLOR_PRINT_HPP
