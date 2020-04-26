//
//  scanftest.c
//  testc
//
//  Created by cyli8.iflytek.com on 2020/3/13.
//  Copyright © 2020 lzy. All rights reserved.
//

#include "scanftest.h"
#include <stdio.h>

void scanfFun() {
    int i;
    float f;
    printf("请输入一个整数和一个实数，中间用逗号隔开\n");
    scanf("%d,%f", &i, &f);
    printf("i=%d,f=%f\n", i, f);
}

void getCharFun() {
    char c;
    printf("请输入一个字符\n");
    c = getchar();
    printf("你输入的字符是：%c\n", c);
    //
    putchar(97);
    printf("/n");
}

void printFun(){
    char a='a';
    printf("字符a用整型输出a=%d,整数97用字符输出97=%c\n",a, 97);
    int x,y;
    (x=10%3),y=5;
    printf("%%%d, %%%d\n", x,y);
    int b=3,e=3,f=1;
    printf("%d, %d\n", (++b, e++), f+2);
}


