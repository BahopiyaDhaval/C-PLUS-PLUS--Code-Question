//34) LinkedList : Intersection of two Sorted Linked Lists.
#include <iostream>
using namespace std;

struct Node { int data; Node* next; Node(int d):data(d),next(NULL){} };

Node* intersection(Node* a, Node* b) {
Node* head = NULL, *tail = NULL;
while (a && b) {
if (a->data == b->data) {
Node* t = new Node(a->data);
if (!head) head = tail = t; else tail->next = t, tail = t;
a = a->next; b = b->next;
        } 
else if (a->data < b->data) a = a->next;
else b = b->next;
    }
return head;
}

void print(Node* n){ while(n){ cout<<n->data<<" "; n=n->next; } cout<<endl; }

int main() {
Node* a = new Node(1); a->next = new Node(2); a->next->next = new Node(4); a->next->next->next = new Node(6);
Node* b = new Node(2); b->next = new Node(4); b->next->next = new Node(6); b->next->next->next = new Node(8);
cout << "List A: "; print(a);
cout << "List B: "; print(b);
Node* res = intersection(a, b);
cout << "Intersection: "; print(res);
}
