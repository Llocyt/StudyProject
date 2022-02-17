/* ������� Capzera*/
#include<bits/stdc++.h>
#include<conio.h>
#define TRUE 1
#define FALSE 0
#define MAXSIZE 100000
using namespace std;
typedef struct 
{
    int elem[MAXSIZE+1];
    int front;
    int rear;
}CircleQueue;
CircleQueue Q;
void InitQueue(CircleQueue *Q)
{
    Q->front=Q->rear=1;
}
int EnterQueue(CircleQueue *Q,int x)
{
    if ((Q->rear+1)%MAXSIZE==Q->front) return FALSE;
    Q->elem[Q->rear]=x;
    Q->rear=(Q->rear+1)%MAXSIZE;
    return TRUE;
}
int DeleteQueue(CircleQueue *Q)
{
    if (Q->front==Q->rear) return FALSE;
    Q->front=(Q->front+1)%MAXSIZE;
    return TRUE;
}
void CreateStack(CircleQueue *Q)
{
    int i,n,x;
    printf("����������Ҫ�ڶ�����Ԥ�ü���Ԫ��:");
    scanf("%d",&n);
    system("cls");
    printf("���ÿո���������%d����:\n",n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&x);
        EnterQueue(Q,x);
    }
    system("cls");
    printf("ѭ�����д����ɹ���\n\n\n\n\n");
    system("pause");
}
void PrintQueue(CircleQueue Q)
{
    int i=Q.front;
    printf("��ͷ��");
    while(i!=Q.rear){
        printf("%d ",Q.elem[i]);
        i=(i+1)%MAXSIZE;
    }
    printf("����β\n\n\n\n\n");
}
int main(){
    char ch1;
    int z=0,x;
    ch1='1';
    while(ch1!='5')
    {
        system("cls");
        printf("-----By:�������-----\n");
        printf("��ѡ����Ҫʹ�õĹ���:\n");
        printf("1.��ʼ��ѭ������\n");
        printf("2.����Ԫ��\n");
        printf("3.����Ԫ��\n");
        printf("4.��ӡ����\n");
        printf("5.�˳�\n");
        ch1=getch();
        switch(ch1)
        {
            case '1':
                system("cls");
                InitQueue(&Q);
                CreateStack(&Q);
                z=1;
            break;
            case '2':
                system("cls");
                if(!z){
                    printf("�㻹δ��������!\n\n\n\n\n");
                    system("pause");
                    break;
                }
                printf("��������Ҫ������е���ֵ��\n");
                scanf("%d",&x);
                EnterQueue(&Q,x);
            break;
            case '3':
                system("cls");
                if(!z){
                    printf("�㻹δ��������!\n\n\n\n\n");
                    system("pause");
                    break;
                }
                DeleteQueue(&Q);
                printf("�����ɹ���\n\n\n\n\n");
                system("pause");
            break;
            case '4':
                system("cls");
                if(!z){
                    printf("�㻹δ��������!\n\n\n\n\n");
                    system("pause");
                    break;
                }
                PrintQueue(Q);
                system("pause");
            break;
            case '5':
            break;
        }
    }
    system("cls");
    printf("��ӭ�´�ʹ��.\n\n\n\n");
    system("pause");
    return 0;
}