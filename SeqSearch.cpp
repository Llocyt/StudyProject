#include<stdio.h>
#include<stdlib.h>
int SeqSearch(int a[10],int k)
    {
    a[0]=k;
    int i=10;
    while(a[i]!=k)
    i--;
    return(i);
    }
int main()
{
    int a[11];
    printf("�����������ʮ��Ԫ��\n");
	int i;
    for(i=1;i<=10;i++)
    {
        scanf("%d",&a[i]);
    }
    int k;
    printf("������Ҫ��ѯ����\n");
    scanf("%d",&k);
	int b=1;
    for(b=1;b<=10;b++)
    {
        printf("%d",a[b]);
    }   
    printf("�����������е�λ��Ϊ��");
    printf("%d",SeqSearch(a,k));
	system("pause");
	return 0;
}