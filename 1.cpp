#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int targets)
{
    unordered_map<int,int> h;
    int k,n;
    for(int i = 0;i<nums.size(); i++)
    {
        n = nums[i];
        k = targets - n;
        auto it = h.find(k);
        if(it!= h.end())
        return{it->second, i};
        h[n] = i;
    }
}
int main()
{
    vector<int> s = {1,2,3,4,8};
    vector<int> sol = twoSum(s, 9);
    cout<<sol[0]<<" "<<sol[1]<<endl;
}

