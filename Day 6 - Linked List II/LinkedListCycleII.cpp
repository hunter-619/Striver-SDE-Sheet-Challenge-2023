/*

35. Find starting node of loop in linked list
Time complexity : O(N)
Space complexity : O(1)

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL || head->next==NULL){
            return NULL;
        }
        
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* start = head;
        
        while(fast->next && fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
            
            if(fast == slow){
                while(slow != start){
                    start = start->next;
                    slow = slow->next;
                }
                return start;
            }
        }
        return NULL;
    }
};

*/