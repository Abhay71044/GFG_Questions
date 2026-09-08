/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
  
    int findLen(Node* head){
        int len=0;
        while(head!=NULL){
            len++;
            head=head->next;
        }
        return len;
    }
  
    Node* swapKth(Node* head, int k) {
        if(head==NULL || head->next==NULL) return head;
        Node* temp1=head;
        Node* temp2=head;
        int len=findLen(head);
        if(k > len)
            return head;
        int p=len-k;
        while(k>1){
            temp1=temp1->next;
            k--;
        }
        while(p>0){
            temp2=temp2->next;
            p--;
        }
        swap(temp1->data,temp2->data);
        return head;
    }
};