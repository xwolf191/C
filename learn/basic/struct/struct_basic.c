/**
 * @author xwolf
 * @description 结构体
 * @date 2018-05-23
 */

#include <stdio.h>
#include <mem.h>
#include "struct_basic.h"

struct Person{
    long id;
    char name[32];
    unsigned  short age;
    int state;

};
void struct_basic(){
   struct Person person;
   person.age = 124;
   person.id = 3232;
   //person.name = "LaoLi";
   // strcpy把从src地址开始且含有'\0'结束符的字符串复制到以dest开始的地址空间，返回值的类型为char*。
   strcpy(person.name,"Laoli");
   printf("id=%d,name=%s,age=%d,state=%d\n",person.id,person.name,person.age,person.state);
   struct Person person2={12,"laowang",43};
    printf("id=%d,name=%s,age=%d,state=%d\n",person2.id,person2.name,person2.age,person2.state);

}