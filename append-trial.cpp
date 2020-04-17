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
void append(Node* prev_node,int new_data)
{
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = NULL;
    prev_node->next = new_node;
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
    Node* second = NULL;
    head = new Node();
    second = new Node();
    head->data = 3;
    head->next = second;
    second->data = 5;
    second->next = NULL;
    append(head->next,4);
    printList(head);
}
