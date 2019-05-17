#include <stdio.h>
#include <ctype.h>
#include <assert.h>

#define NDEBUG

int main(int argc, char *argv[]){
    assert(argc>=2);
    assert(isalnum(argv[1][0]));
    printf("program over!\n");
    return 0;
}