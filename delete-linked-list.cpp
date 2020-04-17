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
    cout << "Elements in Linked List: ";
    while(n!=NULL)
    {
        cout << " " <<n->data << " ";
        n=n->next;
    }
}
void delete_node(Node** head_ref)
{
   Node* current = *head_ref;
   Node* next;
   while(current!=NULL)
   {
       next = current->next;
       free(current);
       current=next;
   }
   *head_ref = NULL;
}
int main()
{
    Node* head = NULL;
    push(&head,2);
    push(&head,5);
    push(&head,7);
    push(&head,9);
    push(&head,1);
    printList(head);
    cout<< "\n";
    cout<< "Deleting Linked List...";
    delete_node(&head);
    cout<< "\n";
    printList(head);
    cout<< "\nLinked list deleted...";
}





