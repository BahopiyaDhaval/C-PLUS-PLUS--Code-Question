//33) LinkedList : Add two numbers represented by linked lists.

#include <iostream>
using namespace std;

struct Node { int data; Node* next; Node(int d):data(d),next(NULL){} };

Node* add(Node* a, Node* b) {
Node* head = NULL, *tail = NULL;
int carry = 0;
while (a || b || carry) {
int sum = (a ? a->data : 0) + (b ? b->data : 0) + carry;
carry = sum / 10;
Node* t = new Node(sum % 10);
if (!head) head = tail = t; else tail->next = t, tail = t;
if (a) a = a->next; if (b) b = b->next;
    }
return head;
}

void print(Node* n){ while(n){ cout<<n->data; n=n->next; } cout<<endl; }

int main() {
Node* a = new Node(2); a->next = new Node(4); a->next->next = new Node(3); // 342
Node* b = new Node(5); b->next = new Node(6); b->next->next = new Node(4); // 465
cout << "Num1: "; print(a);
cout << "Num2: "; print(b);
Node* res = add(a, b);
cout << "Sum:  "; print(res); // Output: 708
}
