#define _CRT_SECURE_NO_WARNINGS 1
#include"student.h"

int main()
{
    int choice = 1;
    struct node* head = NULL;
    while (choice)
    {
        welcome();
        printf("请选择要使用的功能:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            head = creat(head, 5);
            print(head);
            break;
        case 2:
            find(head);
            break;
        case 3:
            dele(head);
            print(head);
            break;
        case 4:
            insert(head);
            print(head);
            break;
        case 0:
            break;
        default:
            printf("请正确输入:");
            break;
        }
    }
    return 0;
}