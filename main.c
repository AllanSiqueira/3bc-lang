#include "src/header.h"
#include "src/register.h"
#include "src/cpu_common.c"
#include "src/cpu_debug.c"
#include "src/cpu_input.c"
#include "src/cpu_memory.c"
#include "src/cpu_string.c"
#include "src/lang_driver.c"
#include "src/lang_interpreter.c"

int main(void)
{
    lang_driver_init();
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
    lang_driver_exit(0);
    return 0;
}
