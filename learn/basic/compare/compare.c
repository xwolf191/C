//
// Created by wolf on 2018/5/19.
//

#include <stdio.h>
#include "compare.h"

/*
 * 比较两个数的大小
 * @return bool
 */
void compare(){
    puts("Please input two number\n");
    int a;
    int b;
    scanf("%d,%d",&a,&b);
    bool res = a > b;
    printf("%d>%d,result is %d .\n",a,b,res);
}