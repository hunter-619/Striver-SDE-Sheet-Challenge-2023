/*
4. Kadane's Algorithm
Time Complexity : O(N)
Space Complexity : O(1)

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum = INT_MIN, sum = 0;

        for(auto &it : nums){
            sum += it;
            if(sum > max_sum) max_sum = sum;
            if(sum < 0) sum = 0;
        }

        return max_sum;
    }
};

*/