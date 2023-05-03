EE_BIN = ../scripts/MKDHookPS2.elf
EE_OBJS = main.o \
mkd\core.o \
mkd\object.o \
mkd\camera.o \
mkd\input.o \
mkd\konquest.o \
mkd\screen.o \
mkd\string.o \
mkd\content.o \
mkd\script.o \
mkdhook.o  \
moves.o \
ps2mem.o \
mips.o \


NEWLIB_NANO = 1
KERNEL_NOPATCH = 1

BASE_ADDRESS = 0x9A0000
EE_LINKFILE = linkfile

EE_CFLAGS =  -fno-zero-initialized-in-bss
EE_LDFLAGS = -Wl,--entry=INVOKER -Wl,-Map,../scripts/MKDHookPS2.map -Wl,'--defsym=BASE_ADDRESS=$(BASE_ADDRESS)'

all: $(EE_BIN)

PS2SDK = ../external/ps2sdk/ps2sdk
include $(PS2SDK)/samples/Makefile.pref
include $(PS2SDK)/samples/Makefile.eeglobal
