//31) LinkedList : Write a Program to Move the last element to Front in a Linked List.
#include <iostream>
using namespace std;

struct Node {
int data;
Node* next;
};
void moveLastToFront(Node*& head) {
if (!head || !head->next) return;
Node* temp = head;
while (temp->next->next) temp = temp->next;
Node* last = temp->next;
temp->next = NULL;
last->next = head;
head = last;
}
int main() {
Node* head = new Node{1, new Node{2, new Node{3, new Node{4, new Node{5, NULL}}}}};
cout << "Before: ";
for (Node* t = head; t; t = t->next) cout << t->data << " ";
cout << endl;
moveLastToFront(head);
cout << "After:  ";
for (Node* t = head; t; t = t->next) cout << t->data << " ";}
