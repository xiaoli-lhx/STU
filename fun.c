#define _CRT_SECURE_NO_WARNINGS 1
#include"student.h"
void welcome()
{
    printf("*******************\n");
    printf("**  学生成绩系统  **\n");
    printf("**  1.添加信息    **\n");
    printf("**  2.查询信息    **\n");
    printf("**  3.删除信息    **\n");
    printf("**  4.插入信息    **\n");
    printf("**  0.退出系统    **\n");
    printf("*******************\n");
}
struct node* creat(struct node* head, int n)
{
    struct node* p=NULL, * q=NULL;
    int i;
    for (i = 1; i <= 5; i++)
    {
        q = (struct node*)malloc(sizeof(struct node));
        printf("Input %d id,name,sex,score\n", i);
        scanf("%d %s %c %d", &q->id, &q->name, &q->sex, &q->score);
        q->next = NULL;
        if (head == NULL)
            head = q;
        else
            p->next = q;
        p = q;
    }
    return head;
}
void print(struct node* head)
{
    struct node* p = head;
    printf("id\tname\tsex\tscore\n");
    while (p != NULL)
    {
        printf("%d\t%s\t%c\t%d\n", p->id, p->name, p->sex, p->score);
        p = p->next;
    }
}
void find(struct node* head)
{
    struct node* p ;
    int x;
    printf("请输入要查询的学号:");
    scanf("%d", &x);
    p = head;
    while (p != NULL && p->id != x)
        p = p->next;
    if (p)
        printf("id=%d\tname=%s\tsex=%c\tscore=%d\n", p->id, p->name, p->sex, p->score);
    else
        printf("%d not be found!\n", x);
}
struct node* dele(struct node* head)
{
    int x;
    struct node* p, * q = NULL;
    p = head;
    printf("输入学号:\n");
    scanf("%d", &x);
    while (p != NULL && p->id != x)
    {
        q = p;
        p = p->next;
    }
    if (p == NULL)
        printf("%d is not be found!\n", x);
    else if (p == head)
        head = p->next;
    else
        q->next = p->next;
    free(p);
    return head;
}
struct node* insert(struct node* head)
{
    struct node* p, * q, * p1;
    q = (struct node*)malloc(sizeof(struct node));
    printf("输入学生姓名,学号,成绩,性别:");
    scanf("%s %d %d %c", &q->name, &q->id, &q->score, &q->sex);
    if (head == NULL)
    {
        q->next = NULL;
        head = q;
        return head;
    }
    if (head->id > q->id)
    {
        q->next = head;
        head = q;
        return head;
    }
    p = head;
    p1 = head->next;
    while (p1 != NULL && p1->id < q->id)
    {
        p = p1;
        p1 = p1->next;
    }
    q->next = p1;
    p->next = q;
    return head;
}