/*
class Node {
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
  
    int findLen(Node* head){
        int count=0;
        while(head!=NULL){
            head=head->next;
            count++;
        }
        return count;
    }
  
    Node* rotate(Node* head, int k) {
        if(head == NULL || head->next==NULL){
            return head;
        }
        int len=findLen(head);
        k = k % len;
        if(k == 0)
            return head;
        
        Node* temp=head;
        while(k>1){
            temp=temp->next;
            k--;
        }
        Node* last=head;
        while(last->next!=NULL){
            last=last->next;
        }
        last->next=head;
        head=temp->next;
        temp->next=NULL;
        return head;
    }
};