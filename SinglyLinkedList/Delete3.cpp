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

void deleteMiddle(Node **head_ref, int key)
{
    Node* temp = *head_ref;
    Node* prev = NULL;

    // If head node itself holds
    // the key to be deleted
    if (temp != NULL && temp->data == key)
    {
        *head_ref = temp->next; // Changed head
        delete temp;            // free old head
        return;
    }

        // Else Search for the key to be deleted,
        // keep track of the previous node as we
        // need to change 'prev->next' */
    else
    {
        while (temp != NULL && temp->data != key)
        {
            prev = temp;
            temp = temp->next;
        }

        // If key was not present in linked list
        if (temp == NULL)
            return;

        // Unlink the node from linked list
        prev->next = temp->next;

        // Free memory
        delete temp;
    }

}
int main()
{
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();

    Node *fourth = new Node();

    head->data = 7;
    head->next = second;

    second->data = 8;
    second->next = third;

    third->data = 9;
    third->next= fourth;


    fourth->data = 66;
    fourth->next = NULL;
    printList(head);

    deleteMiddle(&head,9);
    cout<<"After deleting"<<endl;
    printList(head);

}