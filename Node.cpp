//#include <iostream>
//
//using namespace std;
//
//class Node{
//public:
//    int data;
//    Node *next;
//};
//
//
//void printList(Node *n)
//{
//    while (n!= NULL)
//    {
//        cout<<n->data<<" ";
//        n = n->next;
//    }
//}
//
//void insertAtBeginning(Node** head, int val){
//
//    // dynamically create memory for this newNode
//    Node* newNode = new Node();
//
//    newNode->data = val;
//    newNode->next = *head;
//
//    *head = newNode;
//
//    cout << newNode->data << " inserted" << endl;
//}
//int main()
//{
//
//    Node *head = NULL;
//    Node *second = NULL;
//    Node *third = NULL;
//
//    head = new Node();
//    second = new Node();
//    third = new Node();
//
//    cout<<"Enter nodes"<<endl;
//
//    cin>>head->data;
//    head->next = second;
//
//    cin>>second->data;
//    second->next=third;
//
//    cin>>third->data;
//    third->next = NULL;
//    insertAtBeginning(&head,5);
//    printList(head);
//
//
//    return 0;
//
//
//
//}




#include <iostream>

using namespace std;

class Node{
public:
    int data;
    Node *next;
};

 void printList(Node *n)
 {
     while(n!= NULL)
     {
         cout<<n->data<<" ";
         n = n->next;
     }
 }

 void insertFirst(Node **head, int val)
 {
     Node *newNode = new Node();
     newNode->data = val;
     newNode->next = *head;

     *head = newNode;
 }
int main()
{

    Node *head = NULL;
    Node *second = NULL;
    Node *third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();

    head->data = 10;
    head->next = second;

    second->data = 80;
    second->next = third;

    third->data=12;
    third->next = NULL;
    insertFirst(&head,6);
    printList(head);



}