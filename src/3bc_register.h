#include "3bc.h"

#define MODE_EMPUTY             0x00
#define MODE_DEBUG              0x01
#define MODE_STRING             0x02
#define MODE_INPUT              0x03
#define MODE_INPUT_SILENT       0x04
#define MODE_INPUT_PASSWORD     0x05
#define MODE_MEMORY             0x06
#define MODE_PROTECTED          0x07
#define MODE_MEMORY_AUX         0x08
#define MODE_JUMP               0x09
#define MODE_MATH_SUM           0x0B
#define MODE_MATH_SUB           0x0C
#define MODE_MATH_MUL           0x0D
#define MODE_MATH_DIV           0x0E
#define MODE_MATH_MOD           0x0F
#define MODE_MATH_POWER         0x10
#define MODE_MATH_ROOT          0x11
#define MODE_MATH_PERCENTAGE    0x12
#define MODE_MATH_ABS           0x13
#define MODE_MATH_AVARAGE       0x14

#define NILL 0x00
#define MODE 0X07
#define STRI 0x01
#define STRC 0x02
#define STRO 0x03   
#define STRX 0x04
#define STRU 0x05
#define FREE 0x01
#define ALOC 0x02
#define PULL 0x03
#define PUSH 0x04
#define SREV 0x03
#define SMIN 0x04
#define SMAX 0x05
#define AUXM 0x06
#define GOTO 0x01
#define FGTO 0x02
#define ZGTO 0x03
#define PGTO 0x04
#define NGTO 0x05
#define MATH 0x01

RETURN_DEFINE (*instructions[][8]) (PARAMS_DEFINE) = {
    CPU_PACK0(),
    CPU_PACK5(cpu_debug_stri, cpu_debug_strc, cpu_debug_stro, cpu_debug_strx, cpu_debug_stru),
    CPU_PACK5(cpu_string_stri, cpu_string_strc, cpu_string_stro, cpu_string_strx, cpu_string_stru),
    CPU_PACK4(cpu_input_stri, cpu_input_strc, cpu_input_stro, cpu_input_strx),
    CPU_PACK4(cpu_input_silent_stri, cpu_input_silent_strc, cpu_input_silent_stro, cpu_input_silent_strx),
    CPU_PACK4(cpu_input_password_stri, cpu_input_password_strc, cpu_input_password_stro, cpu_input_password_strx),
    CPU_PACK5(cpu_memory_free, cpu_memory_aloc, cpu_memory_srev, cpu_memory_smin, cpu_memory_smax),
    CPU_PACK_PROTECTED(),
    CPU_PACK4(cpu_memory_aux_free, cpu_memory_aux_aloc, cpu_memory_aux_pull, cpu_memory_aux_push),
    CPU_PACK5(cpu_jump_goto, cpu_jump_fgto, cpu_jump_zgto, cpu_jump_pgto, cpu_jump_ngto),
    CPU_PACK0(),
    CPU_PACK1(cpu_math_sum),
    CPU_PACK1(cpu_math_sub),
    CPU_PACK1(cpu_math_mul),
    CPU_PACK1(cpu_math_div),
    CPU_PACK1(cpu_math_mod),
    CPU_PACK1(cpu_math_power),
    CPU_PACK1(cpu_math_percentage),
    CPU_PACK1(cpu_math_abs),
    CPU_PACK1(cpu_math_average)
};
