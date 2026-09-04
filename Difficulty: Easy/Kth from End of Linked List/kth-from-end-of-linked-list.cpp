/* Structure of Linked List Node
class Node {
  public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
}; */

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
  
    int getKthFromLast(Node* head, int k) {
        if(head==NULL) return 0;
        int len=findLen(head);
        if(len<k) return -1;
        int i=len-k;
        if(k==len){
            return head->data;
        }
        Node*temp=head;
        while(i>1){
            temp=temp->next;
            i--;
        }
        return temp->next->data;
    }
};