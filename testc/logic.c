//
//  logic.c
//  testc
//
//  Created by cyli8.iflytek.com on 2020/3/14.
//  Copyright © 2020 lzy. All rights reserved.
//

#include "logic.h"

int logic() {
    int a=3,b=4;
    printf("a>=b的结果=%d\n", a>=b);
    printf("b>=3的结果=%d\n", b>=3);
    return a>=b==b>=3;
}

int three(){
    int a=1,b=2,c;
    //三目运算符的运算顺序：自右向左结合，先判断a>b?的最后判断a<b?
    return a<b?(c=3):a>b?(c=4):(c=5);
}

void chu() {
    int a,b,d=25;
    a=d/10%9;b=a&&(-1);
    printf("%d,%d\n",a,b);
}

void switchCase() {
    int x=1, a=0,b=0;
    switch (x) {
        case 0:
            b++;
        case 1:
            a++;
        case 2:
            a++;b++;
        default:
            break;
    }
    printf("%d,%d\n",a,b);
}

/**
 判断是否是闰年
 */
void year() {
    int year;
    while (1) {
        printf("请输入年份：\n");
        scanf("%d", &year);
        if((year % 4 == 0) && (year % 100 != 0)) {
            printf("%d是闰年\n", year);
        } else if (year % 400 ==0){
            printf("%d是闰年\n", year);
        } else {
            printf("%d不是闰年\n", year);
        }
    };
}

/**
 从1到n自然数的累加
 */
int add(int n) {
    int i = 0, sum=0;
    for (i=1; i<=n; i++) {
        sum += i;
    }
    return sum;
}

/**
 递归求n的阶乘
 */
int jie(int n) {
    int result = 0;
    if (n > 1) {
        result = n*jie(--n);
    } else {
        return 1;
    }
    return result;
}

void forLoop() {
    int i;
    for (i = 1; i++ <4;) {
        
    }
    printf("for循环：%d\n", i);
    
    int n = 0;
    while (n++<=2);
    printf("while循环：%d\n", n);
}

/**
 从键盘输入的字符中统计数字字符的个数，用换行符结束
 */
int charCount() {
    char c;
    int sum=0;
    c =getchar();
    while (c != '\n') {
        if (c >= '0' && c <= '9') {
            sum++;
        }
        c = getchar();
    }
    return sum;
}
