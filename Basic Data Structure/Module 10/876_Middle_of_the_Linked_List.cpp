//Problem link: https://leetcode.com/problems/middle-of-the-linked-list/description/

#include <bits/stdc++.h>
using namespace std;


//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    int ll_size(ListNode* head) {
        ListNode* temp = head;

        int cnt = 0;
        while(temp != NULL) {
            cnt++;
            temp = temp->next;
        }
        return cnt;
    }
    ListNode* middleNode(ListNode* head) {
        int sz = ll_size(head);

        ListNode* temp = head;
        for(int i = 0; i < sz/2; i++) temp = temp->next;

        return temp; 
    }
};

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    //main code

    return 0;
}