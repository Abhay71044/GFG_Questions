/* Structure of Linked List Node
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
    void deleteNode(Node* x) {
        x->data=x->next->data;
        x->next=x->next->next;
    }
};