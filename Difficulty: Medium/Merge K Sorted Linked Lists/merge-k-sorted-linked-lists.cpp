/* Linked List Node Structure
class Node {
  public:
    int data;
    Node* next;
    Node(int x){
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
  
    Node* mergeTwoLists(Node* list1, Node* list2) {
        if(list1 == NULL) return list2;
        if(list2 == NULL) return list1;
        Node* head=new Node(-1);
        Node* curr=head;
        while(list1 != NULL && list2 != NULL){
            if(list1->data <= list2->data){
                curr->next=list1;
                curr=list1;
                list1=list1->next;
            }
            else{
                curr->next=list2;
                curr=list2;
                list2=list2->next;
            }
        }
        if(list1 != NULL){
            curr->next=list1;
        }
        if(list2 != NULL){
            curr->next=list2;
        }
        return head->next;
    }
  
    Node* mergeKLists(vector<Node*>& arr) {
        Node* ans=NULL;
        for(int i=0;i<arr.size();i++){
            ans=mergeTwoLists(ans,arr[i]);
        }
        return ans;
    }
};