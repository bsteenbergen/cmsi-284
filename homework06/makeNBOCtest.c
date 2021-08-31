#include <stdio.h>
#include "makeNBOC.c"
#include <string.h>
#include <stdlib.h>

int main (int argc, const char *argv[]) {
    if (argc != 2) {
        printf("Enter only one unsigned integer");
        return 0;
    }
    uint64_t val = atoi(argv[1]);
    printf("%llx inputted value: ", val);
    printf("%llx NBO value: ", NBO(val));
    return 0;
}