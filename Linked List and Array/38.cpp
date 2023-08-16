/*

38. Deep Copy of Linked List
Time Complexity : O(N)
Space Complexity : O(N)

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* temp = head;
        while(temp){
            Node* newNode = new Node(temp->val);
            newNode->next = temp->next;
            temp->next = newNode;
            temp = temp->next->next;
        }

        Node* itr = head;
        while(itr){
            if(itr->random)
                itr->next->random = itr->random->next;
            itr = itr->next->next;
        }

        Node* dummy = new Node(0);
        temp = dummy;
        itr = head;
        Node* fast;
        while(itr) {
            fast = itr->next->next;
            temp->next = itr->next;
            itr->next = fast;
            temp = temp->next;
            itr = fast;
        }

        return dummy->next;
    }
};

*/