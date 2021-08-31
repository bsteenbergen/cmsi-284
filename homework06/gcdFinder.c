#include <inttypes.h>
#include <stdio.h>
#include <assert.h>

int64_t findGCDfunc(int64_t, int64_t);

int main() {
    printf("this is the GCD: %lld \n", findGCDfunc(32, 24));
    assert(8 == findGCDfunc(32, 24));
    return 0;
}