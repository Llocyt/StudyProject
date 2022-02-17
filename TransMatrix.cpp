#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 1000
typedef struct
{
    int row,col;
    int e;
}Triple;
typedef struct
{
    Triple data[MAXSIZE+1];
    int m,n,len;
}TSMatrix;
void TransMatrix(TSMatrix *A,TSMatrix *B)
{
    int i,j,k;
    B->len=A->len;
    B->m=A->n;
    B->n=A->m;
    if(B->len>0)
    {
        j=1;
        for(k=1;k<=A->n;k++)
            for(i=1;i<=A->len;i++)
                if(A->data[i].col==k)
                {
                    B->data[j].row=A->data[i].col;
                    B->data[j].col=A->data[i].row;
                    B->data[j].e=A->data[i].e;
                    j++;
                }
    }
}
void CreateMatrix(TSMatrix *M)
{
    int a,b,v;
    printf("请输入矩阵的行：\n");
    scanf("%d",&a);
    M->m=a;
    printf("请输入矩阵的列：\n");
    scanf("%d",&b);
    M->n=b;
    M->len=0;
    printf("请输入矩阵：\n");
    for(a=1; a<=M->m; a++)
    {
        for(b=1; b<=M->n; b++)
        {
            scanf("%d",&v);
            if (v!=0)
            {
                M->len++;
                M->data[M->len].row=a;
                M->data[M->len].col=b;
                M->data[M->len].e=v;
            }
        }
    }
    printf("矩阵%c创建成功\n\n\n\n\n");
}
void PrintMatrix(TSMatrix M)
{
    int i,j;
   
    for(i=1;i<=M.len;i++)
        printf("%d  %d   %d\n",M.data[i].row,M.data[i].col,M.data[i].e);
    printf("\n矩阵打印成功!\n\n");
    system("pause");
}
int main(int argc, char const *argv[])
{  
    TSMatrix *A,*B;
    A=(TSMatrix *)malloc(sizeof(TSMatrix));
    B=(TSMatrix *)malloc(sizeof(TSMatrix));
    CreateMatrix(A);
    PrintMatrix(*A);
    TransMatrix(A,B);
    PrintMatrix(*B);
    return 0;
}
