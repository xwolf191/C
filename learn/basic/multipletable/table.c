/**
 * @author xwolf
 * @description 九九乘法表
 */

#include <stdio.h>
#include "table.h"

#define MAX_NUMBER  9

/*
 * 打印九九乘法表
 */
void multiple_talbe(){

    for (int i=1;i<= MAX_NUMBER;i++){
        for (int j=1 ; j<=i;j++){
           printf("%d*%d=%d ",j,i,j*i);
        }
        printf("\n");
    }
}