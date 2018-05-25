/**
 * @author xwolf
 * @description 文件操作
 * @date 2018-05-25
 */
#include <io.h>
#include <stdio.h>
#include <stdlib.h>
#include "file_create_delete.h"

/**
 * 创建目录
 */
void mkdirs(){
    puts("请输入目录文件路径\n");
    //文件路径
    char filePath[255];
    scanf("%s",&filePath);
    if (access(filePath,F_OK) == -1 ){
        puts("The file not exists!");
        _mkdir(filePath);
    }
}