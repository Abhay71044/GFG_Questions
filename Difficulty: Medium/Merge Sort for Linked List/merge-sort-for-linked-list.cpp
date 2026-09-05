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
  
    Node* findMid(Node* head){
        Node* slow=head;
        Node* fast=head->next;
        while(fast!=NULL){
            fast=fast->next;
            if(fast!=NULL){
                slow=slow->next;
                fast=fast->next;
            }
        }
        return slow;
    }

    Node* merge(Node* left,Node* right){
        if(left == NULL) return right;
        if(right == NULL) return left;
        Node* dummy = new Node(-1);
        Node* curr=dummy;
        while(left!=NULL && right!=NULL){
            if(left->data<=right->data){
                curr->next=left;
                curr=left;
                left=left->next;
            }
            else{
                curr->next=right;
                curr=right;
                right=right->next;
            }
        }
        if(left!=NULL){
            curr->next=left;
            curr=left;
            left=left->next;
        }
        if(right!=NULL){
            curr->next=right;
            curr=right;
            right=right->next;
        }
        return dummy->next;
    }
  
    Node* mergeSort(Node* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        Node* mid=findMid(head);
        Node* left=head;
        Node* right=mid->next;
        mid->next=NULL;
        left=mergeSort(left);
        right=mergeSort(right);

        Node* mergeLL=merge(left,right);
        return mergeLL;
    }
};