//
//  array.c
//  testc
//
//  Created by cyli8.iflytek.com on 2020/3/15.
//  Copyright © 2020 lzy. All rights reserved.
//

#include "array.h"
#include "stdlib.h"
#include <stdio.h>
#include <string.h>

/**
 冒泡排序
 */
void sortPop() {
#define N 10
    int a[N];
    int i,j,temp;
    printf("请输入%d个整数\n", N);
    for (i=0; i<N; i++) {
        scanf("%d",&a[i]);
    }
    for (i=0; i<N; i++) {
        for (j=0;j<N-i;j++) {
            if(a[j]>a[j+1]) {
                temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("排序后的序列为\n");
    for (i=0; i<N; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

/**
 字符串的函数
 */
void stringFun() {
    char str1[6] = "China";
    char str3[6];
    strcpy(str3, str1);
    puts(str3);
    printf("str1长度：%lu\n", strlen(str1));
    
    char str[3][20] = {"basic","foxpro","windows"};
    printf("%s\n", str[2]);
}

/**
 数组名作为实参传递，是地址传递
 */

void swip(int a[2]) {
    int temp = a[0];
    a[0] = a[1];
    a[1] = temp;
}

void testSwip() {
    int a[2] = {1 ,2};
    swip(a);
    printf("a[0]=%d,a[1]=%d\n", a[0], a[1]);
}

