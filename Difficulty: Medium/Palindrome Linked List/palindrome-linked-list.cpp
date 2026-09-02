/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
       data = x;
       next = nullptr;
    }
};*/

class Solution {
  public:
  
    Node* reverseLL(Node* head){
        Node* prev=NULL;
        Node* curr=head;
        Node* forward=curr->next;
        while(curr!=NULL){
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
        }
        return prev;
    }
  
    bool isPalindrome(Node *head) {
        Node* slow=head;
        Node* fast=head;
        while(fast!=NULL){
            fast=fast->next;
            if(fast!=NULL){
                fast=fast->next;
                slow=slow->next;
            }
        }
        Node* reverseLLHead=reverseLL(slow);
        Node* temp1=head;
        Node* temp2=reverseLLHead;
        while(temp2!=NULL){
            if(temp1->data != temp2->data){
                return false;
            }
            temp1=temp1->next;
            temp2=temp2->next;
        }
        return true;
    }
};