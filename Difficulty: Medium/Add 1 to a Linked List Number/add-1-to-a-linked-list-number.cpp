class Solution {
public:
    Node* reverse(Node* head){
        Node* prev = nullptr;
        Node* curr = head;
        while (curr != nullptr) {
            Node* forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        return prev;
    }

    Node* addOne(Node* headmain) {
        Node* rev = reverse(headmain);

        Node* curr = rev;
        int carry = 1;
        Node* last = rev;

        while (curr != nullptr && carry != 0) {
            int sum = curr->data + carry;
            curr->data = sum % 10;
            carry = sum / 10;
            last = curr;
            curr = curr->next;
        }

        if (carry != 0) {
            last->next = new Node(carry);
        }

        return reverse(rev);
    }
};