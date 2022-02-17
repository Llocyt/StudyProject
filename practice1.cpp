#include<stdio.h>
#include<stdlib.h>
#include<bits/stdc++.h>
void sort(int a[],int b[])
{

}
int main()
{
 int a[1000],b[1000],c;
 scanf("%d",&c);
 for(int i=0;i<c; i++)
 {
    scanf("%d%d",&a[i],&b[i]);
 }
 int d,temp1,temp2;
for (d=0; d<c-1; ++d)
    {
        for (int j=0; j<c-1-d; ++j)
        {
            if (b[j] > b[j+1])
            {
                temp1=b[j];
                b[j]=b[j+1];
                b[j+1]=temp1;
                temp2=a[j];
                a[j]=a[j+1];
                a[j+1]=temp2;
            }
        }
    }
int e,f=0;
while (f<c-1)
{
    if (a[f+1]<b[f])
    {
        e++;
        f++;
    }
    else 
        f++;
}
printf("%d",--e);
system("pause");
return 0;
}