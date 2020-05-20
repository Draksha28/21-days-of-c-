#include <iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
};
void push(Node** head_ref, int new_data)
{
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}
void printList(Node* n)
{
    while(n!=NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
    cout << "\n";
}
void repeat(Node* head,int value)
{
    Node* current = head;
    int count=0;
    while(current!=NULL)
    {
        if(current->data==value)
        {
            count++;
        }
        current=current->next;
    }
    
    cout << "No. of times given int occurs is: " << count;
}
int main()
{
    Node* head = NULL;
    push(&head,1);
    push(&head,5);
    push(&head,2);
    push(&head,1);
    push(&head,0);
    push(&head,5);
    push(&head,5);
    printList(head);
    repeat(head,5);
}