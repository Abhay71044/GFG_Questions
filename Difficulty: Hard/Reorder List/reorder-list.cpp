/* Node Structure
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
}; */

class Solution {
  public:
    void reorderList(Node* head) {
        if(head==NULL || head->next==NULL) return ;
        Node* slow=head;
        Node* fast=head;
        while(fast!=NULL){
            fast=fast->next;
            if(fast!=NULL){
                slow=slow->next;
                fast=fast->next;
            }
        }
        Node* second=slow->next;
        slow->next=NULL;
        Node* prev=NULL;
        Node* curr=second;
        
        while(curr!=NULL){
            Node* forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
        }
        second=prev;
        Node* first=head;
        while(second!=NULL){
            Node* firstNext=first->next;
            Node* secondNext=second->next;
            first->next=second;
            second->next=firstNext;
            first=firstNext;
            second=secondNext;
        }
    }
};