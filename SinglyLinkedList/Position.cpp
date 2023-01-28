//
// Created by shawm on 24-10-2022.
//
#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void insertPosition(Node *prev, int data)
{
    if(prev == NULL) {
        cout << "cannot be Null";
        return;
    }

    Node *new_node = new Node;
    new_node->data = data;
    new_node->next = prev->next;
    prev->next = new_node;
}
void printList(Node *n)
{
    while(n != NULL)
    {
        cout<<n->data<<" ";
        n = n->next;
    }
}
int main()
{
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();

    head->data = 8;
    head->next =second;

    second->data = 7;
    second->next = third;

    third->data = 89;
    third->next=NULL;
    insertPosition(second,88);
    printList(head);


}