#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        // Base case: agar 0 ya 1 node hai, swap possible nahi
        if (!head || !head->next) {
            return head;
        }

        // Pehle do nodes
        ListNode* first = head;
        ListNode* second = head->next;

        // Recursively swap bachi hui list
        ListNode* rest = swapPairs(second->next);
        first->next = rest;

        // Swap link
        second->next = first;

        // Naya head hamesha second hoga
        return second;
    }
};