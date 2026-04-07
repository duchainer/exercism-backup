#include "grains.h"
#include <stdio.h>
#include <limits.h>

uint64_t square(uint8_t index){
    if (index < 1 || index > 64){
        return 0;
    }
    // 2 ^(index-1)
    unsigned long long ret = 1ULL << (index-1);
    if (index >= 62){
        printf("ret: %llu\n", ret);
    }
        
    return ret;
}
uint64_t total(void){
    printf("%llu\n", ULLONG_MAX);
    unsigned long long ret = 0ULL;
    for (int i=1; i<=64; i++){
        ret += square(i);
    }
    return ret;
}