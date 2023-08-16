/*

37. Rotate List
Time Complexity : O(N)
Space Complexity : O(1)

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || k == 0) return head;

        ListNode* temp = head;

        int length = 1;
        while(temp->next) {
            length++;
            temp = temp->next;
        }
        temp->next = head;

        k %= length;
        int end = length-k;

        while(end--) temp = temp->next;

        ListNode* start = temp->next;
        temp->next = nullptr;

        return start;
    }
};


*/