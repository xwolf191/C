/**
 * @author xwolf
 * @description 文件操作
 * @date 2018-05-24
 */
#include <stdio.h>
#include <malloc.h>
#include "file_open.h"

/**
 * 读取文件内容
 */
void file_open(){
    puts("请输入文件路径\n");
    FILE *file = NULL;
    char *p = NULL;
    //文件路径
    char filePath[255];
    scanf("%s",&filePath);
    file = fopen(filePath, "r");
    if (file == NULL){
        printf("文件打开失败,错误码:%d\n",errno);
        exit(-1);
    }
    //定位到文件头部
    fseek(file,0,SEEK_END);
    //文件大小
    int size = ftell(file);
    // 根据文件大小动态分配内存空间
    p=(char *)malloc(size+1);
    // 定位到文件开头
    fseek(file,0,SEEK_SET);
    //和rewind等效, 设置给定流的文件的开头的文件位置。
   // rewind(file);
    // 一次性读取全部文件内容
    fread(p,size,1,file);
    //关闭文件
    fclose(file);
    printf("内容: %s\n",p);
    //释放内存
    free(p);
}