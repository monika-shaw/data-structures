//
// Created by shawm on 03-11-2022.
//
#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void printList(Node *n)
{
    while(n != NULL)
    {
        cout<<n->data<<" ";
        n = n->next;
    }
}

void deleteFirst(Node *&n)
{
    if(n == NULL) {
        cout << "Node not present";
        return;
    }

    Node *temp = n;
    n = n->next;
    delete temp;
    return;

}
int main()
{
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();

    head->data = 7;
    head->next = second;

    second->data = 8;
    second->next = third;

    third->data = 9;
    third->next= NULL;
    printList(head);

    deleteFirst(head);
    cout<<"After deleting"<<endl;
    printList(head);

}