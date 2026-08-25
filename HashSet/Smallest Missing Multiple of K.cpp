#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
  int missingMultiple(vector<int>& nums, int k) {
    unordered_set<int>st;
    for(int x : nums){
      st.insert(x);
    }
    int missing = k;
    while(st.count(missing)){
      missing += k;
    }
return missing;
  }
};