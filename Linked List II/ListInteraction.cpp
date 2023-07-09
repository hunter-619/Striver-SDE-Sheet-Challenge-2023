/*

31. Find interaction point of Y linked list
Time Complexity : O(max(N, M))
Space Complexity : O(1)

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* nodeA = headA;
        ListNode* nodeB = headB;

        while(nodeA != nodeB) {
            nodeA = nodeA == NULL ? headB : nodeA->next;
            nodeB = nodeB == NULL ? headA : nodeB->next;
        }

        return nodeA;
    }
};
*/