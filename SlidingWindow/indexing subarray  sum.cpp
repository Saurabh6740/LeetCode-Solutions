#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        int start = 0;
        int  sum = 0;
        for(int  end = 0; end<arr.size(); end++){
            sum += arr[end];
            while(sum > target){
                sum -= arr[start];
                start++;
            }
            if(sum == target){
                return {start + 1 ,end +1};
            }
        }
        return {-1};
    }
};