/**
 * @author xwolf
 * @description 判断字符串是否为数字
 * @date 2018-05-21
 */

#include <stdbool.h>
#include <stdio.h>
#include <mem.h>
#include "is_number.h"

int is_number(char a[]){
    int len = sizeof(a);
    printf("lens = %d\n",len);
    bool is_number = true;
   for (int i = 0; i < len;i++){
       printf("r = %c\n",a[i]);
       if (a[i] != '\0'){
           is_number = a[i]>= 48 && a[i] <= 57;
       }
       if (!is_number){
           return is_number;
       }
   }
   return is_number;
}