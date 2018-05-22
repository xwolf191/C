/**
 * @author xwolf
 * @description 指针基础
 * @date 2018-05-22
 */

#include <stdio.h>
#include "basic.h"

/**
 * @author xwolf
 * @description 基础指针
 */
void basic_one(){
    int a = 1;
    int *b = &a;
    printf("&a=%x\n",&a);//获取十六进制地址值
    printf("b=%x\n",b);//获取十六进制地址值
    printf("*b=%d\n",*b);//*b 获取对应地址的内容
}

/**
 * @author xwolf
 * @description 指针的指针
 */
void basic_two(){
    int a = 1;
    int *b = &a;
    int **c = &b;
    printf("&a=%x\n",&a);//获取十六进制地址值
    printf("b=%x\n",b);//获取十六进制地址值
    printf("*b=%d\n",*b);//*b 获取对应地址的内容
    printf("c=%x\n",c);
    printf("&c=%x\n",&c);
    printf("*c=%x\n",*c);
    printf("**c=%d\n",**c);
}

/**
 * 明解C语言指针基础P229
 */
void basic_core(){

    int  sato  = 178; //佐滕的身向
    int  sanaka =175;  //佐中的身商
    int  hiraki = 165;  // 半木的身高
    int  masaki = 179;  //真崎的身高
    int *isako, *hiroko;
    isako  = &sato;  // & 获取内存逻辑地址
    hiroko = &masaki;  // hiroke指向masaki (喜炊貞崎)
    printf("伊沙子喜炊的人的身高: %d\n", *isako);//178
    printf("洋子喜炊的人的身高: %d\n", *hiroko);//179
    isako = &sanaka;  //1sakO指向sanaka (移情別恋〉
    *hiroko = 180;  //将hicoko指向的対象賦勺180
    putchar('\n');
    printf("佐藤的身高: %d\n",  sato) ;
    printf("佐中的身高: %d\n" , sanaka) ;
    printf("平木的身高:%d\n",  hiraki) ;
    printf("真崎的身高: %d\n",  masaki) ;
    printf("伊沙子喜炊的人的身高: %d\n", *isako) ;//175
    printf("洋子喜炊的人的身高: %d\n", *hiroko);//180
}