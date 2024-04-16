//linked list program for finding the mid of the list
#include<iostream>
using namespace std;
 class Node
        {
        public:
        int data;
        Node *next;
        Node(int data)
            {
            this->data = data;
            this->next = NULL;
            }
        };
Node *midPoint(Node *head) {
  
  if (head == NULL or head->next == NULL) {
    return head;
  }
  Node *slow = head;
  Node *fast = head->next;
  while (fast and fast->next) {
    slow = slow->next;
    fast = fast->next->next;
  }

  return slow;
}
void print(Node *head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
};

int main(){
    Node *newNode1=new Node(2);
    Node *newNode2=new Node(3);
    Node *newNode3=new Node(5);
    Node *newNode4=new Node(8);
    Node *newNode5=new Node(6);
    newNode1->next=newNode2;
    newNode2->next=newNode3;
    newNode3->next=newNode4;
    newNode4->next=newNode5;
    print(newNode1);
    cout<<endl;
   Node *mid= midPoint(newNode1);
   cout<<mid->data<<endl;
    
    
}
