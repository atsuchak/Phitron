//Problem link: https://www.naukri.com/code360/problems/queue-using-array-or-singly-linked-list_2099908

#include <bits/stdc++.h>
using namespace std;

class Node {
   public:
    int data;
    Node* next;
    Node() {
        this->data = data;
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
class Queue {
public:
    Queue() {

    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        return head == NULL;
    }

    void enqueue(int data) {
        Node* temp = head;

        Node* newNode = new Node(data);
        if(temp == NULL) {
            head = newNode;
            return;
        }

        while(temp->next != NULL) temp = temp->next;
        temp->next = newNode;
    }

    int dequeue() {
        if(head == NULL) return -1;

        int str = head->data;

        head = head->next;
        return str;
    }

    int front() {
        if(head == NULL) return -1;

        return head->data;
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