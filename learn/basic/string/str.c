/**
 * @author xwolf
 * @description 字符串
 * @date 2018-05-21
 */

#include <stdio.h>
#include "str.h"

void basic(void){
    char a [4];
    a[0] = 'A';
    a[1] = 'B';
    a[2] = 'C';
    a[3] = 'D';

    char b [] = {'A','B','C','D'};

    char c[] = "ABCD";

    printf("The string %s length is %d\n", a, sizeof(a));
    printf("The string %s length is %d\n", b, sizeof(b));
    printf("The string %s length is %d\n", c, sizeof(c));
};

void foreach(){

    char c[] = "ABCD";
    //定义为正常量
    const unsigned int len = sizeof(c);
    for (int i = 0 ; i < len; i++){
      printf("The %dth char is %c\n",i,c[i]);
    }
}