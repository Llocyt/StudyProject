#include<bits/stdc++.h>
using namespace std;
int num[1001][1001];
int dpss(int n)
{
    int i,j,dp[101][101];
    memset(dp,0,sizeof(dp));
    for(i=n;i>=1;i--)
        for(j=1;j<=i;j++)
        {
            if (i==n) dp[i][j]=num[i][j];
            else dp[i][j]=num[i][j]+max(dp[i+1][j],dp[i+1][j+1]);
        }
    return dp[1][1];
}
int main()
{
    int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++)
        for(j=1;j<=i;j++) cin>>num[i][j];
    cout<<dpss(n)<<endl;
    system("pause");
    return 0;
}