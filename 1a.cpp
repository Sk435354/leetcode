#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int targets)
{
    int k,n;
    for(int i = 0;i<nums.size(); i++)
    {
        n = nums[i];
        k = targets - n;
        for(int j = 0;j<nums.size();j++)
        {
            if(nums[j]== k)
            {
                return {i,j};
            }
        }   
    }
    return{0,0};
}
int main()
{
    vector<int> s = {1,2,3,4,8};
    vector<int> sol = twoSum(s, 14);
    cout<<sol[0]<<" "<<sol[1]<<endl;
}