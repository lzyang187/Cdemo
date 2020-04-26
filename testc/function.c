//
//  function.c
//  testc
//
//  Created by cyli8.iflytek.com on 2020/3/15.
//  Copyright © 2020 lzy. All rights reserved.
//

#include "function.h"
int d=1;
void fun(int p) {
    int d=5;
    d+=p++;
    printf("d=%d,p=%d\n",d,p);
}

void invoke() {
    int a =3;
    fun(a);
    d+=a++;
    printf("d=%d,a=%d\n", d,a);
}

/**
 静态变量
 */

int staticFun(int a) {
    static int b;
    printf("b的值为%d\n",b);
    b++;
    a++;
    return a+b;
}

void invokeStaticFun() {
    int j=3;
    for (int i=0; i<3; i++) {
        printf("第%d次调用结果= %d\n",i , staticFun(j));
    }
}

