#include "mkdhook.h"
#include "character.h"


int  current_select = 0;
int  select_timer = 0;


static const char SZ_1[] = "1";
static const char SZ_2[] = "2";
static const char SZ_3[] = "3";
static const char SZ_4[] = "4";
static const char SZ_5[] = "5";
static const char SZ_AUTUMN_DAO[] = "AUTUMN DAO";
static const char SZ_AXE[] = "AXE";
static const char SZ_BA_GUA[] = "BA GUA";
static const char SZ_BA_SHAN_FAN[] = "BA SHAN FAN";
static const char SZ_BLADES[] = "BLADES";
static const char SZ_BODY_ASHRAH[] = "BODY_ASHRAH";
static const char SZ_BODY_BARAKA[] = "BODY_BARAKA";
static const char SZ_BODY_BORAICHO[] = "BODY_BORAICHO";
static const char SZ_BODY_DAIROU[] = "BODY_DAIROU";
static const char SZ_BODY_DARRIUS[] = "BODY_DARRIUS";
static const char SZ_BODY_ERMAC[] = "BODY_ERMAC";
static const char SZ_BODY_GHOST[] = "BODY_GHOST";
static const char SZ_BODY_HAVIK[] = "BODY_HAVIK";
static const char SZ_BODY_HOTARU[] = "BODY_HOTARU";
static const char SZ_BODY_JADE[] = "BODY_JADE";
static const char SZ_BODY_KABAL[] = "BODY_KABAL";
static const char SZ_BODY_KENSHI[] = "BODY_KENSHI";
static const char SZ_BODY_KIRA[] = "BODY_KIRA";
static const char SZ_BODY_KOBRA[] = "BODY_KOBRA";
static const char SZ_BODY_LIMEI[] = "BODY_LIMEI";
static const char SZ_BODY_LIUKANG[] = "BODY_LIUKANG";
static const char SZ_BODY_MILEENA[] = "BODY_MILEENA";
static const char SZ_BODY_NIGHTWOLF[] = "BODY_NIGHTWOLF";
static const char SZ_BODY_NOOB2[] = "BODY_NOOB2";
static const char SZ_BODY_RAIDEN[] = "BODY_RAIDEN";
static const char SZ_BODY_RANDOM[] = "BODY_RANDOM";
static const char SZ_BODY_SCORPION[] = "BODY_SCORPION";
static const char SZ_BODY_SHUJINKO[] = "BODY_SHUJINKO";
static const char SZ_BODY_SINDEL[] = "BODY_SINDEL";
static const char SZ_BODY_SMOKENOOB[] = "BODY_SMOKENOOB";
static const char SZ_BODY_SMOKE[] = "BODY_SMOKE";
static const char SZ_BODY_SUBZERO[] = "BODY_SUBZERO";
static const char SZ_BODY_TANYA[] = "BODY_TANYA";
static const char SZ_BOJUTSU[] = "BOJUTSU";
static const char SZ_BROADSWORD[] = "BROADSWORD";
static const char SZ_CHOU_JAIO[] = "CHOU JAIO";
static const char SZ_CHOY_LEE_FUT[] = "CHOY LEE FUT";
static const char SZ_DAN_TIEN_DAO[] = "DAN TIEN DAO";
static const char SZ_DRAGON_TEETH[] = "DRAGON TEETH";
static const char SZ_DRAGON[] = "DRAGON";
static const char SZ_DRUNKEN_FIST[] = "DRUNKEN FIST";
static const char SZ_ESCRIMA[] = "ESCRIMA";
static const char SZ_FAN_ZI[] = "FAN ZI";
static const char SZ_FU_JOW_PAI[] = "FU JOW PAI";
static const char SZ_GAUNTLETS[] = "GAUNTLETS";
static const char SZ_GOJU_RYU[] = "GOJU RYU";
static const char SZ_HAPKIDO[] = "HAPKIDO";
static const char SZ_HEAD_ASHRA[] = "HEAD_ASHRA";
static const char SZ_HEAD_BARAKA[] = "HEAD_BARAKA";
static const char SZ_HEAD_BORAICHO[] = "HEAD_BORAICHO";
static const char SZ_HEAD_DAIROU[] = "HEAD_DAIROU";
static const char SZ_HEAD_DAIROU_LOCKED[] = "HEAD_DAIROU_LOCKED";
static const char SZ_HEAD_DARRIUS[] = "HEAD_DARRIUS";
static const char SZ_HEAD_ERMAC[] = "HEAD_ERMAC";
static const char SZ_HEAD_HAVIK[] = "HEAD_HAVIK";
static const char SZ_HEAD_HOTARU[] = "HEAD_HOTARU";
static const char SZ_HEAD_HOTARU_LOCKED[] = "HEAD_HOTARU_LOCKED";
static const char SZ_HEAD_JADE[] = "HEAD_JADE";
static const char SZ_HEAD_JADE_LOCKED[] = "HEAD_JADE_LOCKED";
static const char SZ_HEAD_KABAL[] = "HEAD_KABAL";
static const char SZ_HEAD_KABAL_LOCKED[] = "HEAD_KABAL_LOCKED";
static const char SZ_HEAD_KENSHI[] = "HEAD_KENSHI";
static const char SZ_HEAD_KENSHI_LOCKED[] = "HEAD_KENSHI_LOCKED";
static const char SZ_HEAD_KIRA[] = "HEAD_KIRA";
static const char SZ_HEAD_KIRA_LOCKED[] = "HEAD_KIRA_LOCKED";
static const char SZ_HEAD_KOBRA[] = "HEAD_KOBRA";
static const char SZ_HEAD_KOBRA_LOCKED[] = "HEAD_KOBRA_LOCKED";
static const char SZ_HEAD_LIMEI[] = "HEAD_LIMEI";
static const char SZ_HEAD_LIMEI_LOCKED[] = "HEAD_LIMEI_LOCKED";
static const char SZ_HEAD_LIUKANG[] = "HEAD_LIUKANG";
static const char SZ_HEAD_LIUKANG_LOCKED[] = "HEAD_LIUKANG_LOCKED";
static const char SZ_HEAD_MILEENA[] = "HEAD_MILEENA";
static const char SZ_HEAD_NIGHTWOLF[] = "HEAD_NIGHTWOLF";
static const char SZ_HEAD_RAIDEN[] = "HEAD_RAIDEN";
static const char SZ_HEAD_RAIDEN_LOCKED[] = "HEAD_RAIDEN_LOCKED";
static const char SZ_HEAD_RANDOM[] = "HEAD_RANDOM";
static const char SZ_HEAD_SCORPION[] = "HEAD_SCORPION";
static const char SZ_HEAD_SHINJINKO_LOCKED[] = "HEAD_SHINJINKO_LOCKED";
static const char SZ_HEAD_SHUJINKO[] = "HEAD_SHUJINKO";
static const char SZ_HEAD_SHUJINKO_LOCKED[] = "HEAD_SHUJINKO_LOCKED";
static const char SZ_HEAD_SINDEL[] = "HEAD_SINDEL";
static const char SZ_HEAD_SINDEL_LOCKED[] = "HEAD_SINDEL_LOCKED";
static const char SZ_HEAD_SKAB_LOCKED[] = "HEAD_SKAB_LOCKED";
static const char SZ_HEAD_SMOKENOOB[] = "HEAD_SMOKENOOB";
static const char SZ_HEAD_SMOKENOOB_LOCKED[] = "HEAD_SMOKENOOB_LOCKED";
static const char SZ_HEAD_SUBZERO[] = "HEAD_SUBZERO";
static const char SZ_HEAD_TANYA[] = "HEAD_TANYA";
static const char SZ_HEAD_TANYA_LOCKED[] = "HEAD_TANYA_LOCKED";
static const char SZ_HOOK_SWORDS[] = "HOOK SWORDS";
static const char SZ_HUA_CHUAN[] = "HUA CHUAN";
static const char SZ_HUNG_GAR[] = "HUNG GAR";
static const char SZ_IRON_CLUB[] = "IRON CLUB";
static const char SZ_JEET_KUNE_DO[] = "JEET KUNE DO";
static const char SZ_JOJUTSU[] = "JOJUTSU";
static const char SZ_JUDO[] = "JUDO";
static const char SZ_JUJUTSU[] = "JUJUTSU";
static const char SZ_JUN_FAN[] = "JUN FAN";
static const char SZ_KALI_STICKS[] = "KALI STICKS";
static const char SZ_KATANA[] = "KATANA";
static const char SZ_KENPO[] = "KENPO";
static const char SZ_KICKBOXING[] = "KICKBOXING";
static const char SZ_KOBU_JUTSU[] = "KOBU JUTSU";
static const char SZ_KORI_BLADE[] = "KORI BLADE";
static const char SZ_KRISS[] = "KRISS";
static const char SZ_KUNLUN_DAO[] = "KUNLUN DAO";
static const char SZ_KUO_SHOU[] = "KUO SHOU";
static const char SZ_KWAN_DO[] = "KWAN DO";
static const char SZ_LEOPARD[] = "LEOPARD";
static const char SZ_LUI_HE_BA_FA[] = "LUI HE BA FA";
static const char SZ_MANTIS[] = "MANTIS";
static const char SZ_MIAN_CHUAN[] = "MIAN CHUAN";
static const char SZ_MI_TZU[] = "MI TZU";
static const char SZ_MI_ZONG[] = "MI ZONG";
static const char SZ_MOI_FAH[] = "MOI FAH";
static const char SZ_MONKEY[] = "MONKEY";
static const char SZ_MORNING_STAR[] = "MORNING STAR";
static const char SZ_MUGAI_RYU[] = "MUGAI RYU";
static const char SZ_NAGINATA[] = "NAGINATA";
static const char SZ_NAN_CHUAN[] = "NAN CHUAN";
static const char SZ_NOOB_MONKEY[] = "NOOB - MONKEY";
static const char SZ_NUNCHAKU[] = "NUNCHAKU";
static const char SZ_PAO_CHUI[] = "PAO CHUI";
static const char SZ_PI_GUA[] = "PI GUA";
static const char SZ_SAI[] = "SAI";
static const char SZ_SHAOLIN_FIST[] = "SHAOLIN FIST";
static const char SZ_SHINTO_RYU[] = "SHINTO RYU";
static const char SZ_SHORIN_RYU[] = "SHORIN RYU";
static const char SZ_SHOTOKAN[] = "SHOTOKAN";
static const char SZ_SILAT[] = "SILAT";
static const char SZ_SMOKE_MI_TZU[] = "SMOKE - MI TZU";
static const char SZ_SNAKE[] = "SNAKE";
static const char SZ_STAFF[] = "STAFF";
static const char SZ_SUMO[] = "SUMO";
static const char SZ_SUN_BIN[] = "SUN BIN";
static const char SZ_TAE_KWAN_DO[] = "TAE KWAN DO";
static const char SZ_TAI_CHI[] = "TAI CHI";
static const char SZ_TANG_SOO_DO[] = "TANG SOO DO";
static const char SZ_TOMAHAWKS[] = "TOMAHAWKS";
static const char SZ_VAL_TUDO[] = "VAL TUDO";
static const char SZ_WING_CHUN[] = "WING CHUN";
static const char SZ_XING_YI[] = "XING YI";
static const char SZ_YING_YEUNG[] = "YING YEUNG";
static const char SZ_YUE_CHUAN[] = "YUE CHUAN";
static const char SZ_ZHA_CHUAN[] = "ZHA CHUAN";
static const char SZ_ZI_RAN_MEN[] = "ZI RAN MEN";
static const char SZ_[] = " ";
static const char SZ_body_ashrah_alt_sec[] = "body_ashrah_alt.sec";
static const char SZ_body_baraka_alt_sec[] = "body_baraka_alt.sec";
static const char SZ_body_boraicho_alt_sec[] = "body_boraicho_alt.sec";
static const char SZ_body_dairou_alt_sec[] = "body_dairou_alt.sec";
static const char SZ_body_darrius_alt_sec[] = "body_darrius_alt.sec";
static const char SZ_body_ermac_alt_sec[] = "body_ermac_alt.sec";
static const char SZ_body_havik_alt_sec[] = "body_havik_alt.sec";
static const char SZ_body_hotaru_alt_sec[] = "body_hotaru_alt.sec";
static const char SZ_body_jade_alt_sec[] = "body_jade_alt.sec";
static const char SZ_body_kabal_alt_sec[] = "body_kabal_alt.sec";
static const char SZ_body_kenshi_alt_sec[] = "body_kenshi_alt.sec";
static const char SZ_body_kira_alt_sec[] = "body_kira_alt.sec";
static const char SZ_body_kobra_alt_sec[] = "body_kobra_alt.sec";
static const char SZ_body_limei_alt_sec[] = "body_limei_alt.sec";
static const char SZ_body_liukang_alt_sec[] = "body_liukang_alt.sec";
static const char SZ_body_mileena_alt_sec[] = "body_mileena_alt.sec";
static const char SZ_body_nightwolf_alt_sec[] = "body_nightwolf_alt.sec";
static const char SZ_body_raiden_alt_sec[] = "body_raiden_alt.sec";
static const char SZ_body_scorpion_alt_sec[] = "body_scorpion_alt.sec";
static const char SZ_body_shujinko_alt_sec[] = "body_shujinko_alt.sec";
static const char SZ_body_sindel_alt_sec[] = "body_sindel_alt.sec";
static const char SZ_body_smokenoob_alt_sec[] = "body_smokenoob_alt.sec";
static const char SZ_body_subzero_alt_sec[] = "body_subzero_alt.sec";
static const char SZ_body_tanya_alt_sec[] = "body_tanya_alt.sec";

static const select_screen_entry pSelectTable[] = {
	{21,142,		 SZ_HEAD_JADE,SZ_HEAD_JADE_LOCKED,SZ_BODY_JADE,SZ_body_jade_alt_sec,SZ_5,SZ_FAN_ZI,SZ_KUO_SHOU,SZ_BOJUTSU},
	{12	,144	,	 SZ_HEAD_KENSHI	,SZ_HEAD_KENSHI_LOCKED	,SZ_BODY_KENSHI	,SZ_body_kenshi_alt_sec	,SZ_4	,SZ_TAI_CHI	,SZ_JUDO	,SZ_KATANA},
	{0	,153	,	 SZ_HEAD_SCORPION	,SZ_HEAD_SCORPION	,SZ_BODY_SCORPION	,SZ_body_scorpion_alt_sec	,SZ_2	,SZ_HAPKIDO	,SZ_MOI_FAH	,SZ_MUGAI_RYU},
	{4	,149	,	 SZ_HEAD_MILEENA	,SZ_HEAD_SCORPION	,SZ_BODY_MILEENA	,SZ_body_mileena_alt_sec	,SZ_2	,SZ_YING_YEUNG	,SZ_MIAN_CHUAN	,SZ_SAI},
	{1	,135	,	 SZ_HEAD_BARAKA	,SZ_HEAD_SCORPION	,SZ_BODY_BARAKA	,SZ_body_baraka_alt_sec	,SZ_3	,SZ_SILAT	,SZ_HUNG_GAR	,SZ_BLADES},
	{3	,157	,	 SZ_HEAD_SUBZERO	,SZ_HEAD_SCORPION	,SZ_BODY_SUBZERO	,SZ_body_subzero_alt_sec	,SZ_4	,SZ_SHOTOKAN	,SZ_DRAGON	,SZ_KORI_BLADE},
	{8	,155	,	 SZ_HEAD_SINDEL	,SZ_HEAD_SINDEL_LOCKED	,SZ_BODY_SINDEL	,SZ_body_sindel_alt_sec	,SZ_3	,SZ_ZHA_CHUAN	,SZ_FU_JOW_PAI	,SZ_KWAN_DO},
	{14	,140	,	 SZ_HEAD_HAVIK	,SZ_HEAD_SKAB_LOCKED	,SZ_BODY_HAVIK	,SZ_body_havik_alt_sec	,SZ_5	,SZ_SNAKE	,SZ_TANG_SOO_DO	,SZ_MORNING_STAR},
	{23	,152	,	 SZ_HEAD_RAIDEN	,SZ_HEAD_RAIDEN_LOCKED	,SZ_BODY_RAIDEN	,SZ_body_raiden_alt_sec	,SZ_4	,SZ_NAN_CHUAN	,SZ_JUJUTSU	,SZ_STAFF},
	{9	,147	,    SZ_HEAD_LIMEI	,SZ_HEAD_LIMEI_LOCKED	,SZ_BODY_LIMEI	,SZ_body_limei_alt_sec	,SZ_2	,SZ_MI_ZONG	,SZ_LUI_HE_BA_FA	,SZ_KUNLUN_DAO},
	{19	,143	,	 SZ_HEAD_KABAL	,SZ_HEAD_KABAL_LOCKED	,SZ_BODY_KABAL	,SZ_body_kabal_alt_sec	,SZ_2	,SZ_SUN_BIN	,SZ_GOJU_RYU	,SZ_HOOK_SWORDS},
	{6	,139	,    SZ_HEAD_ERMAC	,SZ_HEAD_SCORPION	,SZ_BODY_ERMAC	,SZ_body_ermac_alt_sec	,SZ_4	,SZ_HUA_CHUAN	,SZ_CHOY_LEE_FUT	,SZ_AXE},
	{5	,150	,    SZ_HEAD_NIGHTWOLF	,SZ_HEAD_SCORPION	,SZ_BODY_NIGHTWOLF	,SZ_body_nightwolf_alt_sec	,SZ_4	,SZ_VAL_TUDO	,SZ_TAE_KWAN_DO	,SZ_TOMAHAWKS},
	{10	,136	,	 SZ_HEAD_BORAICHO	,SZ_HEAD_SCORPION	,SZ_BODY_BORAICHO	,SZ_body_boraicho_alt_sec	,SZ_4	,SZ_SUMO	,SZ_DRUNKEN_FIST	,SZ_JOJUTSU},
	{27	,160	,	 SZ_HEAD_SMOKENOOB	,SZ_HEAD_SMOKENOOB_LOCKED	,SZ_BODY_SMOKENOOB	,SZ_body_smokenoob_alt_sec	,SZ_5	,SZ_NOOB_MONKEY	,SZ_SMOKE_MI_TZU	,SZ_},
	{15	,158	,	 SZ_HEAD_TANYA	,SZ_HEAD_TANYA_LOCKED	,SZ_BODY_TANYA	,SZ_body_tanya_alt_sec	,SZ_5	,SZ_ZI_RAN_MEN	,SZ_YUE_CHUAN	,SZ_KOBU_JUTSU},
	{25	,154	,	 SZ_HEAD_SHUJINKO	,SZ_HEAD_SHUJINKO_LOCKED	,SZ_BODY_SHUJINKO	,SZ_body_shujinko_alt_sec	,SZ_5	,SZ_MANTIS	,SZ_SHAOLIN_FIST	,SZ_DAN_TIEN_DAO},
	{11	,141	,	 SZ_HEAD_HOTARU	,SZ_HEAD_HOTARU_LOCKED	,SZ_BODY_HOTARU	,SZ_body_hotaru_alt_sec	,SZ_1	,SZ_BA_SHAN_FAN	,SZ_PI_GUA	,SZ_NAGINATA},
	{7	,134	,    SZ_HEAD_ASHRA	,SZ_HEAD_SCORPION	,SZ_BODY_ASHRAH	,SZ_body_ashrah_alt_sec	,SZ_5	,SZ_CHOU_JAIO	,SZ_BA_GUA	,SZ_KRISS},
	{22	,137	,	 SZ_HEAD_DAIROU	,SZ_HEAD_DAIROU_LOCKED	,SZ_BODY_DAIROU	,SZ_body_dairou_alt_sec	,SZ_5	,SZ_WING_CHUN	,SZ_ESCRIMA	,SZ_AUTUMN_DAO},
	{20	,146	,	 SZ_HEAD_KOBRA	,SZ_HEAD_KOBRA_LOCKED	,SZ_BODY_KOBRA	,SZ_body_kobra_alt_sec	,SZ_1	,SZ_SHORIN_RYU	,SZ_KICKBOXING	,SZ_KALI_STICKS},
	{24	,138	,	 SZ_HEAD_DARRIUS	,SZ_HEAD_SHINJINKO_LOCKED	,SZ_BODY_DARRIUS	,SZ_body_darrius_alt_sec	,SZ_5	,SZ_SHINTO_RYU	,SZ_LEOPARD	,SZ_GAUNTLETS},
	{18	,145	,	 SZ_HEAD_KIRA	,SZ_HEAD_KIRA_LOCKED	,SZ_BODY_KIRA	,SZ_body_kira_alt_sec	,SZ_5	,SZ_XING_YI	,SZ_KENPO	,SZ_DRAGON_TEETH},
	{16	,148	,	 SZ_HEAD_LIUKANG	,SZ_HEAD_LIUKANG_LOCKED	,SZ_BODY_LIUKANG	,SZ_body_liukang_alt_sec	,SZ_5	,SZ_JUN_FAN	,SZ_PAO_CHUI	,SZ_NUNCHAKU},
};				

static const select_screen_entry pSelectTableNPC[] = {
{28	, -1	, SZ_HEAD_KOBRA_LOCKED	, SZ_HEAD_RANDOM	, SZ_BODY_RANDOM	, SZ_body_scorpion_alt_sec	, SZ_2	, SZ_HAPKIDO	, SZ_MOI_FAH	, SZ_MUGAI_RYU},
{29	, 13	, SZ_HEAD_KOBRA_LOCKED	, SZ_HEAD_RANDOM	, SZ_BODY_RANDOM	, SZ_body_scorpion_alt_sec	, SZ_1	, SZ_DRAGON	, SZ_	, SZ_},
{26	, 96	, SZ_HEAD_KOBRA_LOCKED	, SZ_HEAD_RANDOM	, SZ_BODY_RANDOM	, SZ_body_scorpion_alt_sec	, SZ_5	, SZ_MANTIS	, SZ_SHAOLIN_FIST	, SZ_DAN_TIEN_DAO},
{32	, -1	, SZ_HEAD_KOBRA_LOCKED	, SZ_HEAD_RANDOM	, SZ_BODY_RANDOM	, SZ_body_scorpion_alt_sec	, SZ_4	, SZ_TANG_SOO_DO	, SZ_ESCRIMA	, SZ_BROADSWORD},
{37	, -1	, SZ_HEAD_KOBRA_LOCKED	, SZ_HEAD_RANDOM	, SZ_BODY_RANDOM	, SZ_body_scorpion_alt_sec	, SZ_3	, SZ_SNAKE	, SZ_MANTIS	, SZ_},
{36	, -1	, SZ_HEAD_KOBRA_LOCKED	, SZ_HEAD_RANDOM	, SZ_BODY_RANDOM	, SZ_body_scorpion_alt_sec	, SZ_5	, SZ_LEOPARD	, SZ_FU_JOW_PAI	, SZ_DRAGON_TEETH},
{35	, -1	, SZ_HEAD_KOBRA_LOCKED	, SZ_HEAD_RANDOM	, SZ_BODY_RANDOM	, SZ_body_scorpion_alt_sec	, SZ_1	, SZ_KENPO	, SZ_TAE_KWAN_DO	, SZ_KALI_STICKS},
{34	, -1	, SZ_HEAD_KOBRA_LOCKED	, SZ_HEAD_RANDOM	, SZ_BODY_RANDOM	, SZ_body_scorpion_alt_sec	, SZ_3	, SZ_SHINTO_RYU	, SZ_JEET_KUNE_DO	, SZ_NUNCHAKU},
{33	, -1	, SZ_HEAD_KOBRA_LOCKED	, SZ_HEAD_RANDOM	, SZ_BODY_RANDOM	, SZ_body_scorpion_alt_sec	, SZ_2	, SZ_MANTIS	, SZ_SHAOLIN_FIST	, SZ_BROADSWORD},
{40	, -1	, SZ_HEAD_KOBRA_LOCKED	, SZ_HEAD_RANDOM	, SZ_BODY_RANDOM	, SZ_body_scorpion_alt_sec	, SZ_5	, SZ_	, SZ_	, SZ_IRON_CLUB},
{38	, -1	, SZ_HEAD_KOBRA_LOCKED	, SZ_HEAD_RANDOM	, SZ_BODY_RANDOM	, SZ_body_scorpion_alt_sec	, SZ_5	, SZ_	, SZ_	, SZ_},
{30	, -1	, SZ_HEAD_KOBRA_LOCKED	, SZ_HEAD_RANDOM	, SZ_BODY_RANDOM	, SZ_body_scorpion_alt_sec	, SZ_5	, SZ_	, SZ_	, SZ_},
{39	, -1	, SZ_HEAD_KOBRA_LOCKED	, SZ_HEAD_RANDOM	, SZ_BODY_RANDOM	, SZ_body_scorpion_alt_sec	, SZ_5	, SZ_JUN_FAN	, SZ_PAO_CHUI	, SZ_NUNCHAKU},
{31	, -1	, SZ_HEAD_KOBRA_LOCKED	, SZ_HEAD_RANDOM	, SZ_BODY_RANDOM	, SZ_body_scorpion_alt_sec	, SZ_4	, SZ_NAN_CHUAN	, SZ_JUJUTSU	, SZ_STAFF},
{13	, 98	, SZ_HEAD_KOBRA_LOCKED	, SZ_HEAD_RANDOM	, SZ_BODY_SMOKE	, SZ_body_scorpion_alt_sec	, SZ_5	, SZ_MI_TZU	, SZ_	, SZ_},
{2	, 93	, SZ_HEAD_KOBRA_LOCKED	, SZ_HEAD_RANDOM	, SZ_BODY_NOOB2	, SZ_body_scorpion_alt_sec	, SZ_5	, SZ_MONKEY	, SZ_	, SZ_},
{17	, 90	, SZ_HEAD_KOBRA_LOCKED	, SZ_HEAD_RANDOM	, SZ_BODY_GHOST	, SZ_body_scorpion_alt_sec	, SZ_5	, SZ_JUN_FAN	, SZ_PAO_CHUI	, SZ_NUNCHAKU},
{28	, -1	, SZ_HEAD_RANDOM	, SZ_HEAD_RANDOM	, SZ_BODY_RANDOM	, SZ_body_scorpion_alt_sec	, SZ_2	, SZ_HAPKIDO	, SZ_MOI_FAH	, SZ_MUGAI_RYU},
{28	, -1	, SZ_HEAD_RANDOM	, SZ_HEAD_RANDOM	, SZ_BODY_RANDOM	, SZ_body_scorpion_alt_sec	, SZ_2	, SZ_HAPKIDO	, SZ_MOI_FAH	, SZ_MUGAI_RYU},
{28	, -1	, SZ_HEAD_RANDOM	, SZ_HEAD_RANDOM	, SZ_BODY_RANDOM	, SZ_body_scorpion_alt_sec	, SZ_2	, SZ_HAPKIDO	, SZ_MOI_FAH	, SZ_MUGAI_RYU},
{28	, -1	, SZ_HEAD_RANDOM	, SZ_HEAD_RANDOM	, SZ_BODY_RANDOM	, SZ_body_scorpion_alt_sec	, SZ_2	, SZ_HAPKIDO	, SZ_MOI_FAH	, SZ_MUGAI_RYU},
{28	, -1	, SZ_HEAD_RANDOM	, SZ_HEAD_RANDOM	, SZ_BODY_RANDOM	, SZ_body_scorpion_alt_sec	, SZ_2	, SZ_HAPKIDO	, SZ_MOI_FAH	, SZ_MUGAI_RYU},
{28	, -1	, SZ_HEAD_RANDOM	, SZ_HEAD_RANDOM	, SZ_BODY_RANDOM	, SZ_body_scorpion_alt_sec	, SZ_2	, SZ_HAPKIDO	, SZ_MOI_FAH	, SZ_MUGAI_RYU},
{28	, -1	, SZ_HEAD_RANDOM	, SZ_HEAD_RANDOM	, SZ_BODY_RANDOM	, SZ_body_scorpion_alt_sec	, SZ_2	, SZ_HAPKIDO	, SZ_MOI_FAH	, SZ_MUGAI_RYU},




};



void init_mkdhook_vars()
{
	select_timer = get_game_tick();
	current_select = Select_Default;
}

void hook_new_select_table(int status)
{
	current_select = status;
	refresh_screen();
}

void process_swap_select_screen()
{
	if (get_game_tick() - select_timer <= 15) return;
	select_timer = get_game_tick();
	snd_req(SELECT_SCREEN_SWAP_SOUND);
	current_select++;

	if (current_select > Select_NPC)
		current_select = Select_Default;

	swap_select_screen();
}


void swap_select_screen()
{
	int select_addr = 0x4FEF40;
	for (int i = 0; i < 24; i++)
	{
		int sel = (select_addr + (sizeof(select_screen_entry) * i));

		select_screen_entry ent = pSelectTable[i];

		if (current_select == Select_NPC)
			ent = pSelectTableNPC[i];

		*(int*)(sel + 0) = ent.characterID;
		*(int*)(sel + 4) = ent.soundID;
		*(int*)(sel + 8) = (int)&ent.headName[0];
		*(int*)(sel + 12) = (int)&ent.headLockedName[0];
		*(int*)(sel + 16) = (int)&ent.bodyName[0];
		*(int*)(sel + 20) = (int)&ent.bodyArchiveName[0];
		*(int*)(sel + 24) = (int)&ent.difficulty[0];
		*(int*)(sel + 28) = (int)&ent.style1[0];
		*(int*)(sel + 32) = (int)&ent.style2[0];
		*(int*)(sel + 36) = (int)&ent.style3[0];
	}

	if (get_game_state() == STATE_SELECT)
		refresh_screen();

}

void restore_select_screen()
{
	current_select = Select_Default;
	swap_select_screen();
}

void hook_render()
{
	process_mkdhook();
	render();
}

void process_mkdhook()
{
	// select screen stuff
	{
		if (get_game_state() == STATE_SELECT)
		{
			if (!(get_game_mode() == MODE_PUZZLE || get_game_mode() == MODE_CHESS))
			{
				if (check_switch(0, PAD_L3))
					process_swap_select_screen();

				if (check_switch(1, PAD_L3))
					process_swap_select_screen();
			}
		}
		else
		{
			restore_select_screen();
		}

	}

}