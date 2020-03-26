/*=========================================
            K LINUX PAK ZIP
 =========================================*/
 #include "../inc/pak.h"

int main(void) {
    //ZIP z;

    //z.buf[MAX_BUF];
    gzFile *f = (gzFile)gzopen("file.gz", "wb");
    gzwrite(f, "FILE THIS", strlen("FILE THIS"));
    gzclose(f);
    return 0;
}