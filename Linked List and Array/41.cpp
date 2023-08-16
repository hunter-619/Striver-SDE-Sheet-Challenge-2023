/*
41. Consecutive Ones
Time Complexity : O(N)
Space Complexity : O(1)

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int curr = 0, ans = 0;

        for(int i = 0; i < nums.size(); i++) {
            nums[i] ? curr++ : curr = 0;
            ans = max(curr, ans);
        }

        return ans;
    }
};
*/