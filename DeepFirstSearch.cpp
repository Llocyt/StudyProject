#include<bits/stdc++.h>
using namespace std;
int a[10001],b[10001];
int tot=0;
void Print(int n)
{
    tot++;
    for(int i=1;i<=n;i++) cout<<b[i]<<" ";
    cout<<endl;
}
void dfs(int n,int x)
{
    if (x==n+1) Print(n);
    for(int i=1;i<=n;i++)
        if (!a[i]) {
            a[i]=1;
            b[x]=i;
            dfs(n,x+1);
            a[i]=0;
        }
}
int main()
{
    int n,i;
    cin>>n;
    for(i=1;i<=n;i++)a[i]=0;
    dfs(n,1);
    cout<<"共有"<<tot<<"种排列方式"<<endl;
    return 0;
}