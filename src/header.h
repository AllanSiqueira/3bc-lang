#pragma once
#define PARAMS                  mem_t addres, val_t value
#define CPU_PACK0()             {&cpu_null,&cpu_not_mode,&cpu_not_mode,&cpu_not_mode,&cpu_not_mode,&cpu_not_mode,&cpu_not_mode,&cpu_mode}
#define CPU_PACK1(a)            {&cpu_null,&a,&cpu_not_exist,&cpu_not_exist,&cpu_not_exist,&cpu_not_exist,&cpu_not_exist,&cpu_mode}
#define CPU_PACK2(a,b)          {&cpu_null,&a,&b,&cpu_not_exist,&cpu_not_exist,&cpu_not_exist,&cpu_not_exist,&cpu_mode}
#define CPU_PACK3(a,b,c)        {&cpu_null,&a,&b,&c,&cpu_not_exist,&cpu_not_exist,&cpu_not_exist,&cpu_mode}
#define CPU_PACK4(a,b,c,d)      {&cpu_null,&a,&b,&c,&d,&cpu_not_exist,&cpu_not_exist,&cpu_mode}
#define CPU_PACK5(a,b,c,d,e)    {&cpu_null,&a,&b,&c,&d,&e,&cpu_not_exist,&cpu_mode}
#define CPU_PACK6(a,b,c,d,e,f)  {&cpu_null,&a,&b,&c,&d,&e,&f,&cpu_mode}
#define VALIDATE_NOT_DUALITY    if(addres&&value)cpu_not_duality(addres,value);
#define VALIDATE_NOT_ADRESS     if(addres)cpu_not_addres(addres,value);
#define VALIDATE_NOT_VALUES     if(value)cpu_not_value(addres,value);


typedef unsigned char reg_t;
typedef unsigned char mem_t;
typedef unsigned char val_t;


struct line_s {
    reg_t reg;
    mem_t adr;
    mem_t dta;
};

// FILE: cpu_common.c
void cpu_null(PARAMS);
void cpu_mode(PARAMS);
void cpu_not_mode(PARAMS);
void cpu_not_duality(PARAMS);
void cpu_not_exist(PARAMS);

// FILE: cpu_debug.c
void cpu_debug_stri(PARAMS);
void cpu_debug_strc(PARAMS);
void cpu_debug_stro(PARAMS);
void cpu_debug_strx(PARAMS);

// FILE: cpu_memory.c
void cpu_memory_free(PARAMS);
void cpu_memory_aloc(PARAMS);
void cpu_memory_copy(PARAMS);
void cpu_memory_size_get(PARAMS);
void cpu_memory_size_set(PARAMS);

// FILE: cpu_string.c
void cpu_string_stri(PARAMS);
void cpu_string_strc(PARAMS);
void cpu_string_stro(PARAMS);
void cpu_string_strx(PARAMS);