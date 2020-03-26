/*=========================================
            K LINUX PAK ZIP
 =========================================*/
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 #include <malloc.h>
 #include <zlib.h>

#define CHAR        char
#define MAX_BUF     1024 * 1024 * 16

typedef enum _boolean {
    OFF = 0,
    ON = 1
}boolean;
typedef enum _boolean boolean;

typedef unsigned int uint32_t;

typedef struct __attribute__((__aligned__(8)))
{
    const CHAR *Name;
    uint32_t Size;
    char buf[];
}ZIP;

// obtém somente uma leitura p/ abrir um arquivo com zip
static FILE *
fread_from_file(FILE *fp, ZIP *entry);

// obtém o password do zip
static void
fgetf();