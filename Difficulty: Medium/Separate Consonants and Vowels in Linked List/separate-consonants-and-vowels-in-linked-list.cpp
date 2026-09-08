/* Structure of a link list node
class Node {
  public:
    int data;
    Node *next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};*/
class Solution {
  public:
  
    bool isvowel(char ch) {
        return ch == 'a' || ch == 'e' || ch == 'i' ||
               ch == 'o' || ch == 'u';
    }
  
    Node* arrange(Node* head) {
        Node* vowel=new Node(-1);
        Node* newhead=vowel;
        Node* consonant=new Node(-1);
        Node* part=consonant;
        while(head!=NULL){
            if(isvowel(head->data)){
                Node* newNode=new Node(head->data);
                vowel->next=newNode;
                vowel=newNode;
            }
            else{
                Node* newNode=new Node(head->data);
                consonant->next=newNode;
                consonant=newNode;
            }
            head = head->next;
        }
        vowel->next=part->next;
        return newhead->next;
    }
};