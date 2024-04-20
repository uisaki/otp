#include <stdio.h>
#include <string.h>

char *binary_addition(char *a, char * b) {
    int bit = 0;
    for (; (a[bit] & b[bit]) != 0; ++bit);
    
    return a;
}

int main(void) {
    char p[3] = "ad";
    char q[5] = "word";
    printf("%ld\n",sizeof(p) + sizeof(q));
    binary_addition(p, q);
    return 0;
}