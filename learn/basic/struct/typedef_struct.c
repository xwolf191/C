/**
 * @author xwolf
 * @description 结构体
 * @date 2018-05-23
 */

#include <stdio.h>
#include "typedef_struct.h"

typedef struct {
    long id;
    char name[32];
    unsigned  short age;
    int state;

} Person;
void typed_struct(){
    Person person = {12,"laowang",43};
    printf("id=%d,name=%s,age=%d,state=%d\n",person.id,person.name,person.age,person.state);
}