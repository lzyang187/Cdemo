//
//  structtest.c
//  testc
//
//  Created by cyli8.iflytek.com on 2020/3/18.
//  Copyright © 2020 lzy. All rights reserved.
//

struct Student {
    int age;
    char sex;
};

void testStruct() {
    struct Student s1;
    s1.age = 18;
    printf("%d, %c\n", s1.age, s1.sex);
    struct Student s2 = {18, 'm'};
    printf("%c\n", s2.sex);
    
    struct Teacher {
        int age;
        int studentCount;
    } t1, t2;
    t1.studentCount = 10;
    printf("%d, %d\n", t1.age, t1.studentCount);
    
    //typedef关键字用于为系统固有的或自定义的数据类型定义一个别名。
    typedef struct Student STU;
    //定义一个指向结构体变量的指针变量
    STU *p = &s1;
    //结构体指针变量：圆点运算符与箭头运算符都可以引用结构体成员变量
    printf("%d， %d\n", (*p).age, p ->age);
    
    STU stu[2]={{18,'m'},{19,'f'}};
//    STU *student = stu;
//    STU *student = &stu[0];
    STU *student;
    student = stu;
    stu[1].age = 20;
    printf("%d\n", stu[0].age);
    printf("%d\n", (*(student + 1)).age);
    
    //共用体
    union sample {
        int a;
        char b;
    };
    
    //枚举
    enum week{mon, tue, wed, thu, fri, sat, sun};
    enum week w = mon;
    
}
