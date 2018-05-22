# 指针

## 指针基础

```c
 int a = 1;
 int *b = &a;
 printf("&a=%x\n",&a);//获取十六进制地址值
 printf("b=%x\n",b);//获取十六进制地址值
 printf("*b=%d\n",*b);//*b 获取对应地址的内容
```
![](https://i.imgur.com/E2R1EwC.png)

## 指针的指针

```c
    int a = 1;
    int *b = &a;
    int **c = &b;
    printf("c=%x\n",c);
    printf("&c=%x\n",&c);
    printf("*c=%x\n",*c);
    printf("**c=%x\n",**c);
```
![](https://i.imgur.com/XPqv0x8.png)