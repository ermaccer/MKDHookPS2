#pragma once

enum characters
{
	SCORPION,
	BARAKA,
	NOOB,
	SUBZERO,
	MILEENA,
	NIGHTWOLF,
	ERMAC,
	ASHRAH,
	SINDEL,
	LI_MEI,
	BORAICHO,
	HOTARU,
	KENSHI,
	SMOKE,
	HAVIK,
	TANYA,
	LIU_KANG,
	GHOST,
	KIRA,
	KABAL,
	KOBRA,
	JADE,
	DAIROU,
	RAIDEN,
	DARRIUS,
	SHUJINKO,
	SHUJINKO_13,
	NOOBSMOKE,
	MONSTER,
	ONAGA,
	MKDA_JAX,
	MKDA_RAIDEN,
	MKDA_QUAN_CHI,
	MKDA_KUNG_LAO,
	MKDA_CAGE,
	MKDA_SONYA,
	MKDA_NITARA,
	MKDA_SHANG_TSUNG,
	MKDA_FROST,
	MKDA_KITANA,
	MKDA_DRAHMIN,

	TOTAL_CHARACTERS
};


typedef struct {
	int characterID;
	int soundID;
	char* headName;
	char* headLockedName;
	char* bodyName;
	char* bodyArchiveName;
	char* difficulty;
	char* style1;
	char* style2;
	char* style3;
}select_screen_entry;
