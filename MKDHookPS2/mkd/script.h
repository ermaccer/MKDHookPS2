#pragma once
#define CURRENT_ARGS 0x5D6C3C 
#define ACTIVE_SCRIPT 0x5D6C40
#define AP_DATA	0x5D6330
#define SCRIPT_OBJ 0x627A14


//SOUNDS
// 14 - screaming
// 21 - choking
int snd_req(int id);

int create_mkproc_generic_nostack(int id, int a2, void* pFunc, int unk, int* result);
int am_i_flipped();
int am_i_flipped_direct(int obj);
void swap_active_proc();

int get_cur_proc_pobj();


int plyr_aux_weapon_release(int a1);
int plyr_aux_weapon_grab(int a1, int a2);
int plyr_obj_item_grab(int a1, int a2, int a3, int a4);

void pfx_bind_emitter_num_to_obj_bone(int pfx, int obj, int boneID, int pfxID);

