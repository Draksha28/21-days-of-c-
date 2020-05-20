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
int palindrome(int M)
{
    int org=M;
    int reverse = 0;
    while(M!=0)
    {
        int remainder=M%10;
        reverse=reverse*10+remainder;
        M/=10;
    }
    if(org==reverse)
    {
        cout<< "\nThe elements form a paindrome " <<org;
    }
    else
    {
        cout<< "\nThe elements do not form a palindrome " <<org;
    }
}
void printList(Node* n)
{
    int m = 0;
    while(n!=NULL)
    {
        cout <<n->data<<" ";
        m=m*10+n->data;
        n = n->next;
        
    }

    palindrome(m);
    
    cout << "\n";
}
int main()
{
    Node* head= NULL;
    push(&head,1);
    push(&head,2);
    push(&head,2);
    push(&head,1);
    printList(head);
}