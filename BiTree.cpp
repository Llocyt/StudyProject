#include<stdio.h>
#include<bits/stdc++.h>
#include<conio.h>
typedef struct Node
{
    char data;
     struct Node *Lchild,*Rchild;
}BiTNode,*BiTree;
void CreateBiTree(BiTree *bt)
