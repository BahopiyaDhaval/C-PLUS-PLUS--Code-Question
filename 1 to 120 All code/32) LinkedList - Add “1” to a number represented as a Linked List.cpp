//32) LinkedList : Add “1” to a number represented as a Linked List.

#include <iostream>
using namespace std;

struct Node { int data; Node* next; };
Node* addOne(Node* head) {
if (!head) return new Node{1, NULL};
Node* res = addOne(head->next);
int sum = head->data + (res ? 0 : 1);
head->data = sum % 10;
if (sum / 10) return new Node{1, head};
return head;
}

void print(Node* n){ while(n){ cout<<n->data; n=n->next; } cout<<endl; }
int main() {
Node* head = new Node{1, new Node{9, new Node{9, NULL}}};
cout<<"Before: "; print(head);
head = addOne(head);
cout<<"After:  "; print(head);
}

