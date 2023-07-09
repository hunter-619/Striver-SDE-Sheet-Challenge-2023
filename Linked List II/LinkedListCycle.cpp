/*

32. Detect cycle in linked list
Time complexity : O(N)
Space Complexity : O(1)

class Solution {
public:
    bool hasCycle(ListNode *head) {
       ListNode* slow = head;
       ListNode* fast = head;

       while(fast and fast->next) {
           slow = slow->next;
           fast = fast->next->next;
           if(slow == fast) {
               return true;
           }
       } 

        return false;
    }
};
*/