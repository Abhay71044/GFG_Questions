/* Node is defined as
  class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* segregate(Node* head) {
        if(head==NULL) return NULL;
        if(head->next==NULL) return head;
        int zeroes=0;
        int ones=0;
        int twos=0;
        Node* temp=head;
        while(temp!=NULL){
            if(temp->data==0){
                zeroes++;
            }
            else if(temp->data == 1){
                ones++;
            }
            else{
                twos++;
            }
            temp=temp->next;
        }
        temp=head;
        while(zeroes--){
            temp->data=0;
            temp=temp->next;
        }
        while(ones--){
            temp->data=1;
            temp=temp->next;
        }
        while(twos--){
            temp->data=2;
            temp=temp->next;
        }
        return head;
    }
};