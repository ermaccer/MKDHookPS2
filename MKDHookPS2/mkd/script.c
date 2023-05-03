#include "script.h"

int snd_req(int id)
{
	return ((int(*)(int))0x12B2B0)(id);
}

int create_mkproc_generic_nostack(int id, int a2, void* pFunc, int unk, int* result)
{
	return ((int(*)(int, int, void*, int, int*))0x12C4C0)(id, a2, pFunc, unk, result);
}

int am_i_flipped()
{
	return ((int(*)())0x1F0890)();
}

int am_i_flipped_direct(int obj)
{
	int cache = *(int*)0x5D63A0;
	*(int*)0x5D63A0 = obj;
	int result = am_i_flipped();
	*(int*)0x5D63A0 = cache;
	return result;
}

void swap_active_proc()
{
	((void(*)())0x135670)();
}

int get_cur_proc_pobj()
{
	int apdata = *(int*)AP_DATA;

	if (!apdata)
		return 0;

	int pobj = *(int*)(apdata + 12);

	//if (pobj)
	//{
	//	if (!((*(int*)pobj + 4) == *(int*)(apdata + 16)))
	//		pobj = 0;
	//}


	return pobj;
}

int plyr_aux_weapon_release(int a1)
{
	return ((int(*)(int))0x228420)(a1);
}

int plyr_aux_weapon_grab(int a1, int a2)
{
	return ((int(*)(int, int))0x228430)(a1, a2);
}

int plyr_obj_item_grab(int a1, int a2, int a3, int a4)
{
	return ((int(*)(int, int, int ,int))0x228580)(a1, a2, a3, a4);
}

void pfx_bind_emitter_num_to_obj_bone(int pfx, int obj, int boneID, int pfxID)
{
	((void(*)(int, int, int, int))0x217480)(pfx, obj, boneID, pfxID);
}

void force_away(int a1, int a2)
{
	((void(*)(int, int))0x1F8890)(a1, a2);
}
