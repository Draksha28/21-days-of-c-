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
void deleteNode(Node *node_ptr)  
{  
    Node *temp = node_ptr->next;  
    node_ptr->data = temp->data;  
    node_ptr->next = temp->next;  
    free(temp);  
} 
int main()  
{  
    Node* head = NULL;  
    push(&head, 1);  
    push(&head, 4);  
    push(&head, 1);  
    push(&head, 12);  
    push(&head, 6);  
    cout << "Before deleting \n";  
    printList(head);  
    deleteNode(head);  
    cout << "After deleting \n";  
    printList(head);  
    return 0; 
}  