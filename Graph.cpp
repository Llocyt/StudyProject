#include <stdio.h>
#include <stdlib.h>
#define  INFINITY 2147483648
#define  MAX_POINT_NUM 10
typedef struct 
{
    int vertex[MAX_POINT_NUM];
    int arcs[MAX_POINT_NUM][MAX_POINT_NUM];
    int vertex_num;
    int arc_num;
}AdjMatrix;
int  locatevertex(AdjMatrix * G,int v)
{
    int i;
    for(i=0;i<G->vertex_num;i++)
    {
        if(G->vertex[i]==v)
        {
            return i;
        }
    }
    return -1;
}
void  init_AdjMatrix(AdjMatrix * G)
{
    printf("请输入顶点和边数（顶点数小于等于10）:\n");
    scanf("%d%d",&(G->vertex_num),&(G->arc_num));
    int i;
    printf("输入顶点的编号:\n");
    for(i=0;i<G->vertex_num;i++)
    {
        scanf("%d",&G->vertex[i]);
    }
    int j;
    i=0;
    for(i=0;i<G->vertex_num;i++)
    {
        for(j=0;j<G->vertex_num;j++)
        {
            G->arcs[i][j]=INFINITY;
        }
    }
    int v1,v2,weight;
    printf("输入两个顶点及他们之间的权重值:\n");
    for(int k=0;k<G->arc_num;k++)
    {
        scanf("%d%d%d",&v1,&v2,&weight);
        i=locatevertex(G,v1);
        j=locatevertex(G,v2);
        G->arcs[i][j]=weight;
    }    
}
void print_AdjMatrix(AdjMatrix * G)
{
    int i,j;
    for(i=0;i<G->vertex_num;i++)
    {
        for(j=0;j<G->vertex_num;j++)
        {
            if(G->arcs[i][j]==INFINITY)
            {
                printf("∞\t");
            }
            else
            {
                printf("%d\t",G->arcs[i][j]);
            }
        }
        printf("\n");
    }
}
int main(int argc,const char *argv[])
{
    AdjMatrix  G;
    init_AdjMatrix(&G);
    print_AdjMatrix(&G);
    return 0;
}