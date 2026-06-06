#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {

        //optimal solution

         int n = nums.size();
         vector<int>ans(n);
         int totalsum = 0;
        for(int x : nums){
            totalsum += x;
        }
         int leftsum = 0;
        for(int i = 0; i<n; i++){
            totalsum -= nums[i];
            ans[i] = abs(leftsum - totalsum);
            leftsum += nums[i];
        }
        return ans;
    }
};
//Brute force Approch
  // vector<int>ans(n);
        //  vector<int>leftsum(n, 0);
        //   vector<int>rightsum(n, 0);
       
        // for(int i = 1; i<n; i++){
        //     leftsum[i] =  leftsum[i-1]+nums[i-1];
        // }
       
        //   for(int j = n-2; j>=0; j--){
        //     rightsum[j] = nums[j+1] + rightsum[j+1];
           
        // }
        // for(int  i = 0; i<n; i++){
        //     ans[i] = abs(leftsum[i] - rightsum[i]);
        // }
        // return ans;