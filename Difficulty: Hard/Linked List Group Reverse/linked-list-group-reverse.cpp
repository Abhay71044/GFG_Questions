/* Structure of linked list Node
class Node {
  public:
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = nullptr;
    }
};*/

class Solution {
  public:
  
    int findLen(Node* &head){
        Node* temp=head;
        int count=0;
        while(temp!=NULL){
            temp=temp->next;
            count++;
        }
        return count;
    }
  
    Node *reverseKGroup(Node *head, int k) {
        if(head==NULL){
            return NULL;
        }
        Node* prev=NULL;
        Node* curr=head;
        Node* forward=curr->next;
        int count=0;
        while(count<k && curr!=NULL){
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
            count++;
        }
        if(forward!=NULL){
            head->next=reverseKGroup(forward,k);
        }
        return prev;
    }
};