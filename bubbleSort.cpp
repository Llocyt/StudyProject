#include<stdio.h>
#include<stdlib.h>
void BubbleSort(int a[])
{
	int n=10;
	int i,x,j;
	for(i=0;i<n-1;++i)
	{
		for(j=0;j<n-i-1;++j)
			if(a[j]>a[j+1])
			{
				x=a[j];a[j]=a[j+1];a[j+1]=x;
			}
	}
}
int main()
{	
	printf("请输入数组内的十个元素\n");
	int i;int a[10];
	for(i=0;i<=9;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("开始排序\n");
	BubbleSort(a);
	printf("排序后的数组为：\n");
	int b=0;
	for(b=0;b<=9;b++)
		printf("%d",a[b]);
	system("pause");
	return 0;

}