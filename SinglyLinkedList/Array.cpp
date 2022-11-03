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

void insertLast(Node **node, int data)
{
    Node *newNode =  new Node();
    newNode->data = data;
    newNode->next = NULL;

    if(*node == NULL){
       *node = newNode;
       return;
    }

    Node *temp = *node;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}

void printList(Node *n)
{
    while(n != NULL)
    {
        cout <<n->data <<" ";
        n = n->next;
    }
}

int findLength(Node *n)
{
    int count = 0;
    while(n != NULL)
    {
        count++;
        n = n->next;
    }
    return count;
}

void printArr(int arr[], int l)
{
    cout<<"Array";
    for(int i = 0; i < l; i++)
    {
        cout<<arr[i]<<" ";
    }
}

void convertArr(Node *n)
{
    int len = findLength(n);

    int arr[len],index = 0;

    while(n!= NULL)
    {
        arr[index++] = n->data;
        n = n->next;
    }

    printArr(arr,len);
}

int main()
{
    Node *head = NULL;
    insertLast(&head,5);
    insertLast(&head,7);
    insertLast(&head,8);
    printList(head);
    convertArr(head);
}