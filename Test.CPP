#include<bits/stdc++.h>
#define OK 1;
#define ERROR 0;
using namespace std;
typedef struct Node{
    int data;
    struct Node *next;
}Node;
typedef struct{
    Node *rear;
}CircleQueue;
CircleQueue CQ;
void InitQueue(CircleQueue *CQ)
{
    CQ->rear=(Node *)malloc(sizeof(Node));
    CQ->rear->next=CQ->rear;
}
int EnterQueue(CircleQueue *CQ,int x)
{
    Node *p;
    if (!p) return ERROR;
    p=(Node *)malloc(sizeof(Node));
    p->data=x;
    p->next=CQ->rear->next;
    CQ->rear->next=p;
    CQ->rear=p;
    return OK;
}
int DeleteQueue(CircleQueue *CQ,int *e)
{
    Node *r;
    if (CQ->rear->next==CQ->rear) return ERROR;
    r=CQ->rear->next->next;
    (*e)=r->data;
    CQ->rear->next->next=r->next;
    free(r);
    return OK;
}
void PrintQueue(CircleQueue *CQ)
{
    Node *p;
    p=CQ->rear->next->next;
    printf("队头：");
    while (p!=CQ->rear->next)
    {
        printf("%d ",p->data);
        p=p->next;
    }
    printf("队尾\n");
    system("pause");
    system("cls");
}
int main()
{
    int i,x,n,m;
    int e;
    InitQueue(&CQ);
    printf("请输入你要入队多少个数？");
    cin>>n;
    for(i=1;i<=n;i++)
    {
        system("cls");
        printf("请输入第%d号元素：\n",i);
        cin>>x;
        system("cls");
        if (EnterQueue(&CQ,x)) printf("元素%d成功入队\n",x);
        PrintQueue(&CQ);
    }
    printf("请输入你要出队多少个数?");
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if (DeleteQueue(&CQ,&e)) printf("元素%d成功出队\n",e);
    }
    PrintQueue(&CQ);
}
/*给定一个表达式如2+3*4，数字不超过1位，且表达式有且仅有+ - * / 计算表达式的值*/