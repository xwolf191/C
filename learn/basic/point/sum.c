/**
 * @author xwolf
 * @description 两数求和
 * @date 2018-05-23
 */
#include <stdio.h>
#include "sum.h"

int sum(int a,int b,int *c);

int sum(int a,int b,int *c){
    *c = a+b;
    return c;
}
void print_sum(){
    puts("请输入两个数字\n");
    int a,b,count;
    scanf("%d,%d",&a,&b);
    sum(a,b,&count);
    printf("%d+%d=%d\n",a,b,count);
}

