#include<stdio.h>
#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
typedef struct Node
{
     char data;
     struct Node *Lchild,*Rchild;
}BiTNode,*BiTree;
BiTree L;
void CreateBiTree(BiTree L,char c)
{
    char A;
    L->Lchild=(Node *)malloc(sizeof(Node));
    L->Rchild=(Node *)malloc(sizeof(Node));
    printf("\n输入%c的左子节点：", c);
    A=getch();
    if ((A<'A')||(A>'Z'))
    {
        L->Lchild=NULL;
    }
    else
    {
        CreateBiTree(L->Lchild,A);
        L->Lchild->data=A;
    }
    printf("\n输入%c的右子节点：", c);
    A=getch();
    if(A<'A'||A>'Z')
    {
        L=L->Rchild=NULL;
        return ;
    }
    else 
    {
        CreateBiTree(L->Rchild,A);
        L->Rchild->data=A;
        return ;
    }
}
void TraverseBiTree(BiTree L)
{
    if(L==NULL) return ;
    else
    {
        printf("%c",L->data);
        TraverseBiTree(L->Lchild);
        TraverseBiTree(L->Rchild);
    }
    return ;
}
int TreeDeep(BiTree L)
{
    int deep=0;
    if(L)
    {
    int leftdeep=TreeDeep(L->Lchild);
    int rightdeep=TreeDeep(L->Rchild);
    deep=leftdeep>=rightdeep?leftdeep+1:rightdeep+1;
    }
    return deep;
} 
void PrintTree(BiTree L,int nLayer)
{
    if(L->data==NULL)return;
    PrintTree(L->data->Rchild,nLayer+1);
    for(int i=0;i<nLayer;i++)
    printf(" ");
    printf("%c\n",L->data);
}
int main(){
    int deepth;
    char X;
    L=(BiTree)malloc(sizeof(BiTNode));
    printf("请输入第一个结点的值,*表示没有叶结点:\n");
    X=getch();
    if ((X>='A') && (X<='Z'))
    {
        L->data=X;
        CreateBiTree(L,X);
        system("cls");
        printf("先序遍历二叉树:\n");
        TraverseBiTree(L);
        deepth=TreeDeep(L);
        printf("\n"); 
    }
    system("pause");
    return 0;
}