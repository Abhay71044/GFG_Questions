/* Structure of a linked list node
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};
*/

class Solution {
  public:
    Node* deleteAllOccurances(Node* head, int x) {
        if(head==NULL) return NULL;
        Node* dummy=new Node(-1);
        dummy->next=head;
        Node* prev= dummy;
        Node* curr=head;
        while(curr!=NULL){
            if(curr->data==x){
                prev->next=curr->next;
                curr->next=NULL;
                curr=prev->next;
            }
            else{
                prev=curr;
                curr=curr->next;
            }
        }
        return dummy->next;
    }
};