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

void deleteLast(Node *head)
{
    Node*prev= NULL;
    Node*temp= head;
    while(temp->next!=NULL){
        prev= temp;
        temp=temp->next;
    }
    delete temp;
    prev->next= NULL;
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

    deleteLast(head);
    cout<<"After deleting"<<endl;
    printList(head);

}