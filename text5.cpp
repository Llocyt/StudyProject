#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int>temp;
	int n,m;	
	cin>>n;
	int temp2=0;
	temp.push_back(temp2);
	for(int i=0;i<n;i++)
	{
		m=getchar();
		temp.push_back(m);
	}
	int i=1,ans=0;
	while(i<n)
	{
		if(temp[i]!=i)
		{
		swap(temp[i],temp[temp[i]]);
		ans++;
		}
		i++;
	}
    cout<<ans<<endl;
	return 0;
}