#include<bits/stdc++.h>
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
int length(Node *head){
    Node*temp=head;
    int length=0;
    while(temp!=NULL){
        length++;
        temp=temp->next;
    }
    return length;
}
void deleteNode(Node *node){
    swap(node->data, node->next->data);
    Node *isko_hatana_hai=node->next;
    node->next=node->next->next;
    delete isko_hatana_hai;
    
}
void print(Node *head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
        
    }
};

int main() {
    Node* head=new Node(10);
    Node* node1=new Node(20);
    Node* node2=new Node(30);
    Node* node3=new Node(40);
    head->next=node1;
    node1->next=node2;
    node2->next=node3;
    print(head);
    cout<<endl;
    cout<<length(head);
    deleteNode(node2); 
    cout<<endl;
    print(head);

    return 0;
}
