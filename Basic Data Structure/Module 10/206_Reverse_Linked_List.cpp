//Problem link: https://leetcode.com/problems/reverse-linked-list/description/

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
    void rev_ll(ListNode* &head, ListNode* temp) {
        if(temp->next == NULL) {
            head = temp;
            return;
        }

        rev_ll(head, temp->next);
        temp->next->next = temp;
        temp->next = NULL;
    }

    ListNode* reverseList(ListNode* head) {
        if(head == NULL) return head;

        rev_ll(head, head);
        return head;
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