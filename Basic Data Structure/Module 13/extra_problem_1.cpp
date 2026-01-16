// Problem link: https://www.naukri.com/code360/problems/implement-stack-with-linked-list_630475

#include <bits/stdc++.h>
using namespace std;

class Node {
   public:
    int data;
    Node* next;
    Node() {
        this->data = 0;
        next = NULL;
    }
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
    Node(int data, Node* next) {
        this->data = data;
        this->next = next;
    }
};

Node* head = NULL;
class Stack {
   public:
    Stack() {
    }

    int getSize() {
        Node* temp = head;

        int cnt = 0;
        while (temp != NULL) {
            cnt++;
            temp = temp->next;
        }
        return cnt;
    }

    bool isEmpty() {
        Node* temp = head;
        return temp == NULL;
    }

    void push(int data) {
        Node* temp = head;
        Node* newNode = new Node(data);
        if (head == NULL) {
            head = newNode;
            return;
        }

        while (temp->next != NULL) temp = temp->next;
        temp->next = newNode;
    }

    void pop() {
        Node* temp = head;

        while (temp->next != NULL) temp = temp->next;
        temp = NULL;
    }

    int getTop() {
        Node* temp = head;
        if (temp == NULL) return -1;

        while (temp->next != NULL) temp = temp->next;
        return temp->data;
    }
};

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    // main code

    return 0;
}