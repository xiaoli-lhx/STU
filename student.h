#pragma once
#include<stdio.h>
#include<stdlib.h>


struct node
{
    int id;//ѧ��
    char name[10];//����
    char sex;//�Ա�
    int score;//�ɼ�
    struct node* next;
};

// ����
struct node* creat(struct node* head, int n);
// ����
void find(struct node* head);
//��ӡ
void print(struct node* head);
//ɾ��
struct node* dele(struct node* head);
//����
struct node* insert(struct node* head);
//������
void welcome();
