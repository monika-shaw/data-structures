//
// Created by shawm on 30-10-2022.
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
        cout <<n->data <<" ";
        n = n->next;
    }
}

Node* reverse(Node *headNode)
{
    Node *prev = NULL;
    Node *next = NULL;
    Node *current = headNode;

    while(current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    headNode = prev;
    return headNode;

}

void findLength(Node *headNew)
{
    int count = 0;
    while(headNew!= NULL)
    {
        count++;
        headNew = headNew->next;
    }
    cout << "length is : "<< count;
}
int main()
{
    Node *head =  new Node();
    Node *second = new Node();
    Node *third = new Node();

    head->data = 6;
    head->next = second;

    second->data = 7;
    second->next  = third;

    third->data = 5;
    third->next = NULL;

    printList(head);
    findLength(head);
    Node *newNode;
    newNode = reverse(head);
    cout <<"After reverse"<<endl;
    printList(newNode);
}