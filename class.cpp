#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,result;;
    cin>>a;
    if(a<=2)
    {
        cout<<a;
    }
	if(a%2==1)
	{
		result=a*(a-1)*(a-2);
	}
    else
    {
		if(a%3==0)
        {
			result=(a-1)*(a-2)*(a-3);
		}
        else
        {
			result=a*(a-1)*(a-3);
		}
	}
	cout<<result<<endl;
    system("pause");
    return 0;
}