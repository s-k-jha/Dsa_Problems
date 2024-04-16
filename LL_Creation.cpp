// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    
    Node(int data){
        this->data=data;
        this->next=NULL;
        
    }
};
void print(Node *head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
        
    }
};
int main() {

     Node *node1 = new Node(10);
     Node *node2= new Node(20);
     Node *node3= new Node (30);
     node1->next=node2;
     node2->next=node3;
     print(node1);
   
}
