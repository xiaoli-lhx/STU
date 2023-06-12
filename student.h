#pragma once
#include<stdio.h>
#include<stdlib.h>


struct node
{
    int id;//学号
    char name[10];//名字
    char sex;//性别
    int score;//成绩
    struct node* next;
};

// 创建
struct node* creat(struct node* head, int n);
// 查找
void find(struct node* head);
//打印
void print(struct node* head);
//删除
struct node* dele(struct node* head);
//插入
struct node* insert(struct node* head);
//主界面
void welcome();
