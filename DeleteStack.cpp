#include<stdio.h>
#include<stdlib.h>
#define Stack_Size 50
typedef struct
{
	int elem[Stack_Size];
	int top;
}SeqStack;
SeqStack *s=(SeqStack *)malloc(sizeof(SeqStack));
void InitStack()
{//	s=(SeqStack *)malloc(sizeof(SeqStack));
	s->top=-1;
}
int Pop()
{
	if (s->top==-1) return 0;
	else{
		(s->top)--;
		return 1;
	}
}
int main(){
	int a,b,i;
	printf("����������ٸ����֣�������50\n");
	scanf("%d",&b);
	InitStack();
	printf("����������ѹ��ջ�������\n");
	for(a=0;a<b;a++){
		scanf("%d",&s->elem[a]);
		(s->top)++;
	}
	printf("���ڿ�ʼ��ջһλ\n");
	Pop();
	for(a=0;a<=s->top;a++)
	{
		printf("%d",s->elem[a]);
	}
	return 0;
}