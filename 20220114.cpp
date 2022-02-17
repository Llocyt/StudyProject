#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
    int a=nums1.size(),b=nums2.size();
    if(k>a*b)
    {
        k=a*b;
    }
vector<vector<int>>ans;
    for(int i=0;i<min(k,a);i++)
    {
        for(int j=0;j<min(k,b);j++)
        {
            ans.push_back({nums1[i], nums2[j]});
        }        
    }
    for(int c=0;c<min(k,a)*min(k,b)-1;c++)
    {
        for(int d=0;d<min(k,a)*min(k,b)-1-c;d++)
        if((ans[c][0]+ans[c][1])>(ans[c+1][0]+ans[c+1][1]))
        {   
            int temp1,temp2;
            ans[c][0]=temp1;
            ans[c][0]=ans[c+1][0];
            ans[c+1][0]=temp1;
            ans[c][1]=temp2;
            ans[c][1]=ans[c+1][1];
            ans[c+1][1]=temp2;
        }
    }
       ans.erase(ans.begin()+k,ans.end());
       return ans;
    }
};
class Solution {
public: 
    // ***题，直接暴力咯
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<pair<int,int>> record;
        int n1=nums1.size(),n2=nums2.size();
        for(int i=0;i<min(k,n1);++i){
            for(int j=0;j<min(k,n2);++j){
                record.push_back({nums1[i],nums2[j]});
            }
        }
        sort(record.begin(),record.end(),[](const auto& a,const auto& b){
            return a.first+a.second<b.first+b.second;
        });
        vector<vector<int>> res;
        for(int i=0;i<min(k,int(record.size()));++i){
            res.push_back({record[i].first,record[i].second});
        }
        return res;
    }
};