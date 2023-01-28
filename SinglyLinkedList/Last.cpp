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

int main()
{
    int size;
    cin>>size;
    for(int j = 0; j < size;j++) {
        int n;
        cin >> n;
        Node *head = new Node();
        cin >> head->data;
        head->next = NULL;
        int d;
        for (int i = 0; i < n - 1; i++) {
            cin >> d;
            insertLast(&head, d);
        }

        printList(head);
        cout<<endl;
    }
}