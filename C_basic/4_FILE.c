#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
    int ch;
    FILE *fp;
    long cnt = 0;
    if (argc!=2){
        fprintf(stderr, "error: %s\n", argv[0]);
        exit(1);
    }
    fp = fopen(argv[1], "r");
    if ( !fp ) {
        fprintf(stderr, "error: %s\n", argv[1]);
        exit(1);
    }
    while (ch=getc(fp) != EOF){
        putc(ch, stdout);
        cnt++;
    }
    fclose(fp);
    printf("%ld chars\n", cnt);
    return 0;
}