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
int GetNth(Node* head,int X)
{   
   
    cout << "Element at index " << X << " (middle element of node) " <<" is: ";
    Node* current = head;
    int count=0;
    while(current!=NULL)
    {
        //cout<<"iit"<<count;
        if(count==X)
        {
            //cout<<'h';
            cout<<current->data;
            count++;
        }
        else
        {
            count++;
            //cout<<'g';
            
        }
        current = current->next;
        
    }
    
}
int find_node(Node* node)
{
    
    int M=0;
    Node* new_node = node;
    while(node->next!=NULL)
    {
        M++;
        node=node->next;
    }
    cout<<"No. of nodes in list is: " <<M+1;
    cout<< "\n";
    int X=(M/2);
    GetNth(new_node, X);
}
int main()
{
    Node* head = NULL;
    push(&head,8);
    push(&head,7);
    push(&head,3);
    push(&head,4);
    push(&head,5);
    push(&head,0);
    push(&head,1);
    printList(head);
    find_node(head);
}






