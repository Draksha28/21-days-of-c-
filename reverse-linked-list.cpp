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
Node* reverse(Node* head)
{
    Node* current = head;
    Node* prev = NULL;
    Node* next = NULL;
    while(current!=NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    return head;
}
int main()
{
    Node* head = NULL;
    push(&head,1);
    push(&head,7);
    push(&head,5);
    push(&head,3);
    push(&head,4);
    printList(head);
    head=reverse(head);
    printList(head);
}
