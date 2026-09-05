/* Linked List Node Structure
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
    Node* makeUnion(Node* head1, Node* head2) {
        unordered_map<int,bool>mp;
        Node* dummy=new Node(-1);
        Node* newHead=dummy;
        while(head1!=NULL){
            if(mp.find(head1->data) == mp.end()){
                Node* newNode=new Node(head1->data);
                dummy->next=newNode;
                dummy=newNode;
                mp[head1->data]=true;
            }
            head1=head1->next;
        }
        while(head2!=NULL){
            if(mp.find(head2->data) == mp.end()){
                Node* newNode=new Node(head2->data);
                dummy->next=newNode;
                dummy=newNode;
                mp[head2->data]=true;
            }
            head2=head2->next;
        }
        return newHead->next;
    }
};