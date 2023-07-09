/*

33. Check if linked list is palindrome or not
Time Complexity : O(N)
Space Complexity : O(N)

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* temp = head;
        stack<int> st;

        while(temp) {
            st.push(temp->val);
            temp = temp->next;
        }

        ListNode* start = head;

        while(!st.empty()) {
            int top = st.top();
            st.pop();

            if(top != start->val)
                return false;
            start = start->next;
        }

        return true;
    }
};

*/