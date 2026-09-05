/*
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
    Node* intersectPoint(Node* head1, Node* head2) {
        Node* a=head1;
        Node* b=head2;
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
                head2=head2->next;
            }
        }
        if(b==NULL){
            int alen=0;
            while(a!=NULL){
                a=a->next;
                alen++;
            }
            while(alen--){
                head1=head1->next;
            }
        }
        while(head1!=head2){
            head1=head1->next;
            head2=head2->next;
        }
        return head1;
    }
};