#include <bits/stdc++.h>
using namespace std;

class Node {
   public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insert_node(Node*& head, Node*& tail, int val) {
    Node* newNode = new Node(val);

    if (head == NULL) {
        head = newNode;
        tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}

void print_ll(Node*& head) {
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insert_at_pos(Node*& head, int idx, int val) {
    Node* newNode = new Node(val);
    Node* temp = head;

    for (int i = 0; i < idx-1; i++) {
        temp = temp->next;
        if (temp == NULL) {
            cout << "Invalid" << endl;
            return;
        }
    }

    if(idx == 0) {
        newNode->next = head;
        head = newNode;
    }else {
        newNode->next = temp->next;
        temp->next = newNode;  
    }
    print_ll(head);
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while (1) {
        cin >> val;
        if (val == -1) break;

        insert_node(head, tail, val);
    }

    int n, x;
    cin >> n;
    while (n--) {
        cin >> x >> val;
        insert_at_pos(head, x, val);

        // print_ll(head);
    }

    return 0;
}