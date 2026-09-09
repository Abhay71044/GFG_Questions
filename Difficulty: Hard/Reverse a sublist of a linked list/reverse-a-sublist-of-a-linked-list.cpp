/* Structure of a Linked List Node
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
  
    Node* reverse(Node* head){
        Node* prev=NULL;
        Node* curr=head;
        while(curr!=NULL){
            Node* forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
        }
        return prev;
    }
    
    Node* reverseBetween(int a, int b, Node* head) {
        if(a==b) return head;
        Node* prev=NULL;
        Node* left=head;
        Node* right=head;
        while(a>1){
            prev=left; 
            left=left->next;
            a--;
        }
        while(b>1){
            right=right->next;
            b--;
        }
        Node* forward=right->next;
        if(prev!=NULL){
            prev->next=NULL;
        }
        right->next=NULL;
        Node* curr=reverse(left);
        if(prev != NULL){
            prev->next = curr;
        } 
        else {
            head = curr;
        }
        while(curr->next!=NULL) curr=curr->next;
        curr->next=forward;
        return head;
    }
};