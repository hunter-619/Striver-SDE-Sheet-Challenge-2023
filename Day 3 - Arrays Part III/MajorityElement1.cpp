/*

15. Majority Element N / 2
Time Complexity : O(N)
Space Complexity : O(1)

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 1;
        int curr = nums[0];

        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] == curr) {
                cnt ++;
            }
            else {
                cnt--;
            }

            if(cnt < 0) {
                curr = nums[i];
                cnt = 1;
            }
        }

        return curr;
    }
};

*/