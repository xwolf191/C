/**
 * @author xwolf
 * @description ָ�����
 * @date 2018-05-22
 */

#include <stdio.h>
#include "basic.h"

/**
 * @author xwolf
 * @description ����ָ��
 */

void set_value(int i);

void set_value_point(int *i);

void basic_one(){
    int a = 1;
    int *b = &a;
    printf("&a=%x\n",&a);//��ȡʮ�����Ƶ�ֵַ
    printf("b=%x\n",b);//��ȡʮ�����Ƶ�ֵַ
    printf("*b=%d\n",*b);//*b ��ȡ��Ӧ��ַ������
}

/**
 * @author xwolf
 * @description ָ���ָ��
 */
void basic_two(){
    int a = 1;
    int *b = &a;
    int **c = &b;
    printf("&a=%x\n",&a);//��ȡʮ�����Ƶ�ֵַ
    printf("b=%x\n",b);//��ȡʮ�����Ƶ�ֵַ
    printf("*b=%d\n",*b);//*b ��ȡ��Ӧ��ַ������
    printf("c=%x\n",c);
    printf("&c=%x\n",&c);
    printf("*c=%x\n",*c);
    printf("**c=%d\n",**c);
}

/**
 *  ����ֵ����
 */
void basic_three(){
    int a = 1;
    set_value(a);
    printf("a=%d\n",a);//1
}

/**
 * ָ�뺯��
 */
void basic_three_point(){
    int a = 1;
    set_value_point(&a);
    printf("a=%d\n",a);//10
}


void set_value(int i) {
    i = 10;
}

void set_value_point(int *i) {
    *i = 10;
}



/**
 * ����C����ָ�����P229
 */
void basic_core(){

    int  sato  = 178; //����������
    int  sanaka =175;  //���е�����
    int  hiraki = 165;  // ��ľ�����
    int  masaki = 179;  //��������
    int *isako, *hiroko;
    isako  = &sato;  // & ��ȡ�ڴ��߼���ַ
    hiroko = &masaki;  // hirokeָ��masaki (ϲ��ؑ��)
    printf("��ɳ��ϲ�����˵����: %d\n", *isako);//178
    printf("����ϲ�����˵����: %d\n", *hiroko);//179
    isako = &sanaka;  //1sakOָ��sanaka (����e����
    *hiroko = 180;  //��hicokoָ��Č����x��180
    putchar('\n');
    printf("���ٵ����: %d\n",  sato) ;
    printf("���е����: %d\n" , sanaka) ;
    printf("ƽľ�����:%d\n",  hiraki) ;
    printf("��������: %d\n",  masaki) ;
    printf("��ɳ��ϲ�����˵����: %d\n", *isako) ;//175
    printf("����ϲ�����˵����: %d\n", *hiroko);//180
}