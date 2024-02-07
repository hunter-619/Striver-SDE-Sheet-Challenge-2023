/*
40. Remove duplicate from sorted array
Time Complexity : O(N)
Space Complexity : O(1)

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0, j = 0;

        while(j < nums.size()) {
            while(j < nums.size() && nums[i] == nums[j])
                j++;
            if(j < nums.size()) nums[++i] = nums[j];
        }

        return i+1;
    }
};
*/