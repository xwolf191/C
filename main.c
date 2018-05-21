#include <stdio.h>

#include "learn/basic/string/is_number.h"

int main() {
    //char b[] = {'8','3','9','1','w'};
    char b[] = "893432w";
    int res = is_number(b);
    printf("res=%d\n",res);
    return 0;
}