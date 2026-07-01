#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       vector<int>lastindex(256, -1);
       int left = 0; 
       int ans = 0;
       for(int right = 0; right < s.size(); right++){
        if(lastindex[s[right]] >= left){
             left = lastindex[s[right]]+1;
        }
        lastindex[s[right]] = right;
        ans = max(ans, right - left + 1);
       }  
       return ans;
    }
};