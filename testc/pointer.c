//
//  pointer.c
//  testc
//
//  Created by cyli8.iflytek.com on 2020/3/17.
//  Copyright © 2020 lzy. All rights reserved.
//

#include "pointer.h"
#include "math.h"

void pointerTest() {
    int x=1,y=2,d;
    int *p = &x;
    y = *p + 1;
    printf("%d, %d\n", *p, y);
    d = sqrt((double)*p);
    *p = 0;
    *p+=1;
    y = *p++;//y = *p
    printf("%d, %d\n",d, y);
}

/**
 指针数组
 */
void pointerArray() {
    //一维数组
    int a[5] = {1,2,3,4,5};
    int *p = a;
    printf("%d, %d, %d\n", a[0], *p, *a);
    printf("%d, %d, %d\n", a[2], *(p+2), *(a + 2));
    
    //二维数组
    int b[3][2] = {{7,8},{4,6},{3,9}};
    int *px = b;
    printf("%d, %d, %d\n", b[0], b[1][0], *px);
    printf("%d, \n", *(px + 2));
    
    char string[30] = "This is a string.";
    char *str;
    str = string;
    puts(str);
    printf("%s\n", str);
    
    //指针数组
    int c=0, d=1, e=2;
    int * parray[3] = {&c, &d, &e};
    printf("%d, %d\n", parray[2], *parray[2]);
    
    //指针的指针
    int *i = &e;
    int **j = &i;
    printf("%d, %d\n", *i, **j);
    
}


void swipFun(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
}

void pointerFun(int *x, int *y) {
    //交互地址空间所存的数据
    int temp = *x;
    *x = *y;
    *y = temp;
}

/**
 测试指针函数
 */
void testPointerFun() {
    int x = 10, y = 20;
    swipFun(10, 20);
    printf("%d, %d\n", x, y);
    pointerFun(&x,&y);
    printf("%d, %d\n", x, y);
}
