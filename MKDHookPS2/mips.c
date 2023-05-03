#include "mips.h"

uint32_t lui(RegisterID rt, int32_t imm)
{
    return (0x3c000000 | (rt << OP_SH_RT) | (*(int32_t*)&imm & 0xffff));
}

uint32_t ori(RegisterID rt, RegisterID rs, int32_t imm)
{
    return (0x34000000 | (rt << OP_SH_RT) | (rs << OP_SH_RS) | (*(int32_t*)&imm & 0xffff));
}