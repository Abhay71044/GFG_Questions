/* structure for a node
class Node {
 public:
  int data;
  Node *next;

  Node(int x){
      data = x;
      next = NULL;
  }
}; */

class Solution {
  public:
    Node* sortedInsert(Node* head, int data) {
        if(head->data >= data){
            Node* temp= new Node(data);
            temp->next= head;;
            Node* curr= head;
            while(curr->next != head){
                curr= curr->next;

            }
            curr->next= temp;
            head= temp;
            return head;
        }
        Node* curr= head;
        while(curr and curr->next != head and curr->next->data< data){
            curr= curr->next;
        }
        //case 1 ki wo node next se judata hau
         Node* temp= new Node(data);
        if(curr->next==head){
            curr->next= temp;
            temp->next= head;
            return head;
        }
        temp->next= curr->next;
        curr->next= temp;
        return head;
    }
};