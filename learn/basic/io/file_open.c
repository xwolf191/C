/**
 * @author xwolf
 * @description �ļ�����
 * @date 2018-05-24
 */
#include <stdio.h>
#include <malloc.h>
#include "file_open.h"

/**
 * ��ȡ�ļ�����
 */
void file_open(){
    puts("�������ļ�·��\n");
    FILE *file = NULL;
    char *p = NULL;
    //�ļ�·��
    char filePath[255];
    scanf("%s",&filePath);
    file = fopen(filePath, "r");
    if (file == NULL){
        printf("�ļ���ʧ��,������:%d\n",errno);
        exit(-1);
    }
    //��λ���ļ�ͷ��
    fseek(file,0,SEEK_END);
    //�ļ���С
    int size = ftell(file);
    // �����ļ���С��̬�����ڴ�ռ�
    p=(char *)malloc(size+1);
    // ��λ���ļ���ͷ
    fseek(file,0,SEEK_SET);
    //��rewind��Ч, ���ø��������ļ��Ŀ�ͷ���ļ�λ�á�
   // rewind(file);
    // һ���Զ�ȡȫ���ļ�����
    fread(p,size,1,file);
    //�ر��ļ�
    fclose(file);
    printf("����: %s\n",p);
    //�ͷ��ڴ�
    free(p);
}