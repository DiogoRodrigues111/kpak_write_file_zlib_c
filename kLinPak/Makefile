GCC = gcc
C_SOURCE = source/*.c
FPFLAGS = -std=c11
CFLAGS = `pkg-config --cflags --libs gtk+-3.0 libz zlib` -lm -lz
OUT = -o build/kpak.out

all:
	$(GCC) $(C_SOURCE) $(CFLAGS) $(FPFLAGS) $(OUT)
	@echo "----CODE BUILD SUCCESS----"