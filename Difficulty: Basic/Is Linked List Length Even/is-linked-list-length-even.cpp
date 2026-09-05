/* Structure of link list node
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};*/

class Solution {
  public:
    bool isEven(Node* head) {
        int len=0;
        while(head!=NULL){
            head=head->next;
            len++;
        }
        if(len%2 == 0){
            return true;
        }
        return false;
    }
};