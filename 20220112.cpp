#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
int n=nums.size();
int temp[n][2];
    for(int k=0;k<nums.size();k++)
    {
        temp[k][0]=nums[k];
        temp[k][1]=k;
    }
    for (int i = 0; i < nums.size()-1; i++)
	    {
            for (int j = 0; j < nums.size() - i - 1; j++)
	        {
                if (temp[j][0] > temp[j+1][0]) 
			    {
                    int temp1 = temp[j][0];
                    temp[j][0] = temp[j+1][0];
                    temp[j+1][0] = temp1;
                    int temp2 = temp[j][1];
                    temp[j][1] = temp[j+1][1];
                    temp[j+1][1] = temp2;
                }
            }
        }
    int temp3=0,temp4=temp[0][1];
    for (int l=0;l<nums.size();l++)
        {
            if(temp4<temp[l][1])
            {
                temp3++;
                temp4=temp[l][1];
            }
        }
    if(temp3<2)
    {
        return false;
    }
    else{
        return true;
    }     
    }
};
class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
    if (nums.size() < 3) return false;
    int min = INT_MAX, mid = INT_MAX;
 for (auto num : nums) {
      if (num <= min) {
        min = num;
      } else if (num <= mid) {
        mid = num;
      } 
      else if (num > mid) {
        return true;
      }
    }
    return false;    
    }
};