#include<bits/stdc++.h>
using namespace std;

class ListNode{
    public:
    int value;
    ListNode* next=nullptr;
    ListNode(int value){
        this->value=value;
        this->next=nullptr;
    }
};
class Solution{
    public:
    ListNode*mergeTwoList(ListNode*l1, ListNode*l2){
        if(l1==nullptr) return l2;
        if(l2==nullptr) return l1;
        ListNode*ans=new ListNode(-1);

        ListNode*tail=ans;

        while(l1!=nullptr && l2!=nullptr){
            if(l1->value < l2->value){
                tail->next=l1;
                tail=l1;
                l1=l1->next;

            }
            else{
                tail->next=l2;
                tail=l2;
                l2=l2->next;
            }
        }
        if(l1==nullptr) tail->next=l2;
        else tail->next=l1;
        return ans->next;
    }
};
void printList(ListNode * head){
    ListNode * temp=head;
    while(temp!=nullptr){
        cout<<temp->value<<" ";
        temp=temp->next;

    }
    cout<<endl;
}

int main()
{
   ListNode *l1= new ListNode(1);
   ListNode *l2= new ListNode(3);
   ListNode *l3= new ListNode(5);

   l1->next=l2;
   l2->next=l3;

   ListNode* l4= new ListNode(2);
   ListNode* l5= new ListNode(4);
   ListNode * l6= new ListNode(6);

   l4->next=l5;
   l5->next=l6;

    cout << "List 1: ";
    printList(l1);
    cout << "List 2: ";
    printList(l4);
   
   Solution solution;
  ListNode* mergeList=solution.mergeTwoList(l1, l4);

    printList(mergeList);

}