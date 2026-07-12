#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      int count =1;
      int index = 1;
      for(int i=1; i<nums.size();i++)  
      if(nums[i] != nums[i-1]){
        nums[index]=nums[i];
        count++;
        index++;
      } 
      return count;
    }
};