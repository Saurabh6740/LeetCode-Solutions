#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void subset(vector<int>& arr, int index, int n, vector<vector<int>>& ans,vector<int>& temp){
        if(index >= n){
            ans.push_back(temp);
             return;
        }
        subset(arr, index+1, n, ans, temp);

        temp.push_back(arr[index]);
        subset(arr, index+1, n, ans, temp);
        temp.pop_back();
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
     vector<vector<int>>ans;
        vector<int>temp;
        sort(nums.begin(), nums.end()); 
         subset(nums, 0, nums.size(), ans, temp );
         sort(ans.begin(), ans.end());
         // jo mera unique suset aa rha tha usko erase kar diya ....
         ans.erase(unique(ans.begin(), ans.end()), ans.end());
        return ans;   
    }
};