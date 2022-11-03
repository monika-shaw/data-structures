//
// Created by shawm on 23-10-2022.
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
        cout <<n->data<<" ";
        n = n->next;
    }
}

void insertLast(Node **h, int data)
{
    Node *n = new Node();
    n->data = data;
    n->next = NULL;

    if(*h == NULL)
    {
        *h = n;
        return;
    }
    Node  *temp = *h;
    while(temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = n;
}

void searchElement(Node *newNode, int data)
{
    while(newNode != NULL)
    {
        if(newNode->data == data) {
            cout << "Found" << data;
            return;
        }
        newNode = newNode->next;
    }
}
int main()
{
    Node *head = NULL;

        int n;
        cin >> n;
        int d;
        for (int i = 0; i < n; i++) {
            cin >> d;
            insertLast(&head, d);
        }

        printList(head);
        searchElement(head,10);
}
