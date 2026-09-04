/* Structure of a link list Node
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
    Node* zigZag(Node* head) {
        if(head->next == nullptr) return head;
        bool isLess = true;
        Node* curr  = head;
        while(curr && curr->next){

            if(isLess){
                 if(curr->data > curr->next->data){
                     swap(curr->data , curr->next->data);
                 }
                 isLess = !isLess;
            }
            else{
                 if(curr->data < curr->next->data){
                     swap(curr->data , curr->next->data);
                 }
                 isLess = !isLess;
            }

            curr = curr->next;
        }
        return head;
    }
};