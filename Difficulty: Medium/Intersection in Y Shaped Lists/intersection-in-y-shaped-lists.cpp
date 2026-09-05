/* Structure of Linked List Node
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};*/

class Solution {
  public:
    Node* intersectPoint(Node* headA, Node* headB) {
        Node* a=headA;
        Node* b=headB;
        while(a!=NULL && b!=NULL){
            a=a->next;
            b=b->next;
        }
        if(a==NULL){
            int blen=0;
            while(b!=NULL){
                b=b->next;
                blen++;
            }
            while(blen--){
                headB=headB->next;
            }
        }
        if(b==NULL){
            int alen=0;
            while(a!=NULL){
                a=a->next;
                alen++;
            }
            while(alen--){
                headA=headA->next;
            }
        }
        while(headA!=headB){
            headA=headA->next;
            headB=headB->next;
        }
        return headA;
    }
};