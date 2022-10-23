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
        n = n->next;
    }
}
void insertFirst(Node **head_new, int data)
{
    Node *new_node = new Node();
    new_node->data = data;
    new_node->next = (*head_new);
    (*head_new) = new_node;
}
int main()
{

        int n;
        cin>>n;
        Node *head = new Node();
        cin>>head->data;
        head->next = NULL;
        int d;
        for(int i = 0; i < n-1; i++) {
            cin>>d;
            insertFirst(&head, d);
        }
        printList(head);

}