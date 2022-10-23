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
        cout << n->data<<" ";
        n=n->next;
    }
}
int main()
{

        Node *head = new Node();
        Node *second = new Node();
        head->data = 9;
        head->next = second;
        second->data = 7;
        second->next=NULL;
        printList(head);

}