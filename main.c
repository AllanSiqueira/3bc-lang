#include <stdio.h>
#ifndef _WIN32
#include <curses.h> 
#else
#include <conio.h> 
#endif

#include "src/header.h"
#include "src/register.h"
#include "src/cpu_common.c"
#include "src/cpu_debug.c"
#include "src/cpu_input.c"
#include "src/cpu_memory.c"
#include "src/cpu_string.c"

int main(void)
{
    initscr();
    cbreak();
    
    (*instructions[MODE_STRING][STRC])(NILL, 'H');
    (*instructions[MODE_STRING][STRC])(NILL, 'E');
    (*instructions[MODE_STRING][STRC])(NILL, 'L');
    (*instructions[MODE_STRING][STRC])(NILL, 'O');
    (*instructions[MODE_STRING][STRC])(NILL, ' ');
    (*instructions[MODE_STRING][STRC])(NILL, 'W');
    (*instructions[MODE_STRING][STRC])(NILL, 'O');
    (*instructions[MODE_STRING][STRC])(NILL, 'R');
    (*instructions[MODE_STRING][STRC])(NILL, 'L');
    (*instructions[MODE_STRING][STRC])(NILL, 'D');
    (*instructions[MODE_STRING][STRC])(NILL, '!');
    (*instructions[MODE_STRING][STRC])(NILL, '\n');

    refresh();
    return 0;
}
