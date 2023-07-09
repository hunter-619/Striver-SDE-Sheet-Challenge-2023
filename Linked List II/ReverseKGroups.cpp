/*

33. Reverse linked list in k Groups
Time Complexity : O(N)
Space Complexity : O(1)

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
       if(!head || k == 1) return head;

       ListNode* dummy = new ListNode(0);
       dummy->next = head;

       ListNode* prev = dummy, *cur = dummy, *nex = dummy;

       int count = 0;
       while(cur->next) {
           cur = cur->next;
           count++;
       }

       while(count >= k) {
           cur = prev->next;
           nex = cur->next;

           for(int i = 1; i < k; i++) {
               cur->next = nex->next;
               nex->next = prev->next;
               prev->next = nex;
               nex = cur->next;
           }
           prev = cur;
           count -= k;
       }
       return dummy->next;
    }
};

*/