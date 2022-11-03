//
// Created by shawm on 26-10-2022.
//
#include <iostream>

using namespace std;

class Node{
public:
    int data;
    Node *next;
};

void printList(Node *n)
{
    while(n != NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }

}

void insertFirst(Node **head_new, int data)
{
    Node *new_node = new Node();
    new_node->data = data;
    new_node->next = *head_new;
    *head_new = new_node;
}

void insertLast(Node **head_new, int data)
{
    Node *new_node = new Node();
    new_node->data = data;
    new_node->next = NULL;

    if(*head_new == NULL)
    {
        *head_new = new_node;
    }
    Node *temp = *head_new;

    while(temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = new_node;

}

void insertAfterPosition(Node *prev, int data)
{
    Node *new_node = new Node();
    new_node->data =data;
    new_node->next = prev->next;
    prev->next = new_node;
}
int main()
{
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();

    head->data = 8;
    head->next = second;

    second->data = 98;
    second->next = third;

    third->data = 83;
    third->next = NULL;

    insertFirst(&head, 429);
    insertLast(&head,2);
    insertAfterPosition(second,66);
    printList(head);
}