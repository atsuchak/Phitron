//Problem link: https://leetcode.com/problems/palindrome-linked-list/description/

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
    void insert_at_tail(ListNode* &head, ListNode* &tail, int val) {
        ListNode* newNode = new ListNode(val);

        if(head == NULL) {
            head = newNode;
            tail = newNode;
            return;
        }

        tail->next = newNode;
        tail = newNode;
    }

    void rev_ll(ListNode* &head, ListNode* temp) {
        if(temp->next == NULL) {
            head = temp;
            return;
        }

        rev_ll(head, temp->next);
        temp->next->next = temp;
        temp->next = NULL;
    }

    bool isPalindrome(ListNode* head) {
        ListNode* newHead = NULL;
        ListNode* newTail = NULL;

        ListNode* temp = head;
        while(temp != NULL) {
            insert_at_tail(newHead, newTail, temp->val);
            temp = temp->next;
        }

        rev_ll(newHead, newHead);

        temp = head;
        ListNode* newTemp = newHead;
        while(newTemp != NULL) {
            if(temp->val != newTemp->val) return 0;
            temp = temp->next;
            newTemp = newTemp->next;
        }
        return 1;
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