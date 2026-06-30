#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
int next(int n){
int nums = 0;
      while(n != 0){
        int digits = n % 10;
        nums += digits * digits;
        n/=10;
      }  
      return nums;
}

    bool isHappy(int n) {
      int slow  = n;
      int fast = next(n);
      while(fast != 1 && slow != fast){
        slow = next(slow);
        fast = next(next(fast));
      }
      return fast == 1;
    }
};