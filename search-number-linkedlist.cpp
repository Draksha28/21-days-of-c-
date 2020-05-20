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
int GetNth(Node* head, int index)
{
    Node* current = head;
    int count=0;
    while(current!=NULL)
    {
        if(count==index)
        return(current->data);
        else
        {
            count++;
        }
        current=current->next;
    }
}
void printList(Node *node)  
{  
    while (node != NULL)  
    {  
        cout<<" "<<node->data;  
        node = node->next;  
    }  
}  
int main()
{
    Node* head = NULL;
    push(&head,5);
    push(&head,7);
    push(&head,10);
    push(&head,6);
    push(&head,3);
    printList(head);
    cout<< "\n";
    cout << " The element found at index 0 is: " <<GetNth(head, 0);
}




