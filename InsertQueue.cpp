#include<bits/stdc++.h>
using namespace std;
typedef struct Node
{
	 int data;
	 struct Node *next; 
}LinkQueueNode;
typedef struct
{
	 LinkQueueNode *front;
	 LinkQueueNode *rear; 
}LinkQueue;
void InitQueue(LinkQueue *Q)
{
	Q->front=(LinkQueueNode *)malloc(sizeof(LinkQueueNode));
	if(Q->front!=NULL)
	{
		Q->rear=Q->front;
		Q->front->next=NULL;
	 }
}

