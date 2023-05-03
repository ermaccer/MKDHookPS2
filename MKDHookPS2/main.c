#include "mkdhook.h"
#include "ps2mem.h"
#include "moves.h"

int hook_character_lock_status(int id, int param)
{
    id = 0;
    return  ((int(*)(int, int))0x192580)(id, param);
}

void init()
{
     makeJal(0x1238C4, hook_render);
	 makeJal(0x132750, hook_character_lock_status);
	 makeJal(0x1340E8, hook_character_lock_status);
	 makeJal(0x15D3E8, hook_character_lock_status);
	 makeJal(0x190CF4, hook_character_lock_status);
	 makeJal(0x190DA0, hook_character_lock_status);
	 makeJal(0x191074, hook_character_lock_status);
	 makeJal(0x193690, hook_character_lock_status);
	 makeJal(0x193DE8, hook_character_lock_status);
	 makeJal(0x1941DC, hook_character_lock_status);
	 makeJal(0x194880, hook_character_lock_status);
	 makeJal(0x196138, hook_character_lock_status);
	 makeJal(0x1961C4, hook_character_lock_status);
	 makeJal(0x2D8878, hook_character_lock_status);
	 makeJal(0x3827A4, hook_character_lock_status);
	 makeJal(0x382934, hook_character_lock_status);
	 makeJal(0x3E835C, hook_character_lock_status);
	 makeJal(0x3E84F8, hook_character_lock_status);
	 makeJal(0x3E8F8C, hook_character_lock_status);

	 init_moves_hook();
}


void INVOKER()
{
    asm("ei\n");
    asm("addiu $ra, -4\n");

    init();
}



int main()
{
    return 0;
}