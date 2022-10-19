#include<iostream>
using namespace std;
//class 
class Node{
    public:
    int data; //we can store integer, strings, or any type of data
    Node* next;// pointer of reference connects one node to the other
};
void printList(Node*n){
    while(n!=NULL){
        cout<<n->data<<" ";
        n=n->next;
    }
}
int main()
{
    Node* head=NULL;
    Node* second=NULL;
    Node* third=NULL;
    //3 nodes have been allocated in the heap
    head=new Node();
    second=new Node();
    third=new Node();
    // head,second and third are pointers to them
    head->data=1;
    head->next=second;
    second->data=2;
    second->next=third;
    third->data=3;
    third->next=NULL;
    printList(head);
    return 0;
}   