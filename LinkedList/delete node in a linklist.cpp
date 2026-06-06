#include<bits/stdc++.h>
using namespace std;

 //Definition for singly-linked list.
 struct ListNode {
      int val;
      ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
  };
 
class Solution {
public:
    void deleteNode(ListNode* node) {
      ListNode* temp = node->next;
        node->val = temp->val;
        node->next = temp->next;
        delete temp;
    }
};

// //dry run 
// 4->5->1->9
//  Maan lo node pointer 5 wale node par point kar raha hai.

// node
//  ↓
// 4 -> 5 -> 1 -> 9
// Step 1
// ListNode* temp = node->next;

// temp ab 1 wale node ko point karega.

// node      temp
//  ↓          ↓
// 4 -> 5 -> 1 -> 9
// Step 2
// node->val = temp->val;

// temp->val = 1

// Toh node ki value 5 se 1 ho jayegi.

// 4 -> 1 -> 1 -> 9
//      ↑    ↑
//    node temp

// Dhyan do: abhi 2 baar 1 dikh raha hai.

// Step 3
// node->next = temp->next;

// temp->next = 9 wala node

// Toh node ka next ab direct 9 ko point karega.

// 4 -> 1 ------> 9
//      ↑
//    node

// 1 -> 9
// ↑
// temp

// Ab original second 1 list se disconnect ho gaya.

// Step 4
// delete temp;

// Disconnected node ko memory se delete kar diya.

// 4 -> 1 -> 9
// Final Output
// 4 -> 1 -> 9