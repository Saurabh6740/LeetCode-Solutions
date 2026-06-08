#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> ans;
        vector<int> rem;
        int pivotCount = 0;
        int start = 0;
        while(start < nums.size()){
            if(nums[start] < pivot){
                ans.push_back(nums[start]);
                start++;
            }else if(nums[start] > pivot){
                rem.push_back(nums[start]);
                start++;
            }else{
                pivotCount++;
                start++;
            }
        }
        for(int i = 0; i < pivotCount; i++){
            ans.push_back(pivot);
        }
        for(int i = 0; i < rem.size(); i++){
            ans.push_back(rem[i]);
        }
        return ans;
    }
};

// Dry run code...
// nums = [9, 12, 5, 10, 14, 3, 10], pivot = 10
// index:   0    1    2    3    4    5    6
// nums:  [ 9,  12,   5,  10,  14,   3,  10]
//          ↑
//        start
// pivot wall = 10

// start=0 → 9 < 10 → ans mein
// [ 9,  12,   5,  10,  14,   3,  10]
//        ↑
//      start
// start=1 → 12 > 10 → rem mein
// [ 9,  12,   5,  10,  14,   3,  10]
//              ↑
//            start
// start=2 → 5 < 10 → ans mein
// [ 9,  12,   5,  10,  14,   3,  10]
//                   ↑
//                 start
// start=3 → 10 == 10 → pivotCount++
// [ 9,  12,   5,  10,  14,   3,  10]
//                        ↑
//                      start
// start=4 → 14 > 10 → rem mein
// [ 9,  12,   5,  10,  14,   3,  10]
//                             ↑
//                           start
// start=5 → 3 < 10 → ans mein
// [ 9,  12,   5,  10,  14,   3,  10]
//                                  ↑
//                                start
// start=6 → 10 == 10 → pivotCount++
// [ 9,  12,   5,  10,  14,   3,  10]
//                                       ↑
//                                  start=7 → loop khatam

// Final:
// ans     = [9, 5, 3]
// pivots  = [10, 10]   (pivotCount = 2)
// rem     = [12, 14]

// output  = [9, 5, 3, 10, 10, 12, 14] 