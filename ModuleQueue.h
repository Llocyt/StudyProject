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