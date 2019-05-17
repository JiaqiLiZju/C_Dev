#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int main(void){
    char c;
    char prev;
    long n_char = 0L;
    int n_line = 0;
    int n_word = 0;
    int p_line = 0;
    bool inword = false;
    while ((c = getchar()) != EOF){
        n_char++;
        if (c == '\n')
            n_line++;
        if (!isspace(c) && !inword){
            inword = true;
            n_word++;
        }
        if (isspace(c) && inword)
            inword = false;
        prev = c;
    }
    if (prev != '\n')
        p_line++;
    printf("char=%ld;\twords=%d;\tlines=%d;\n",n_char, n_word, n_line);
    printf("partial line=%d;\n", p_line);
    return 0;
}