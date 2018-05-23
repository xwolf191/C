/**
 * @author xwolf
 * @description 指针和数组
 * @date 2018-05-23
 */

#include <stdio.h>
#include "array.h"

#define ARRAY_SIZE 8

/**
 * 数组的指针和第一个字符的指针相同
 */
void array_point_basic(){
    char a[4];
    printf("a=%x\n",&a);
    printf("a[0]=%x\n",&a[0]);
    printf("a[1]=%x\n",&a[1]);
    printf("a[2]=%x\n",&a[2]);
    printf("a[3]=%x\n",&a[3]);
}
/**
 * 数组和指针
 *    *(b+n)  指针b指向n个元素后的指针
 *    *(b-n)  指针b指向n个元素前的指针
 */
void array_point(){

    int a[ARRAY_SIZE] = {10,20,30,40,50};

    int *b = &a[1];

    for (int i=0; i<ARRAY_SIZE;i++){

      printf("a[%d]=%d,*(b+%d)=%d\n",i,a[i],i,*(b+i));

    }

}