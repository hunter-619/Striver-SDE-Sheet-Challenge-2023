/*

21. Longest Consequent Sequence
Time Complexity : O(N)
Space Complexity : O(N)

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> hashSet;

        for(int& num : nums) {
            hashSet.insert(num);
        }

        int longest_streak = 0;

        for(int& num : nums){
            if(hashSet.count(num - 1) == 0) {
                int current_num = num;
                int current_streak = 1;

                while(hashSet.count(current_num + 1)) {
                    current_num += 1;
                    current_streak += 1;
                }

                longest_streak = max(current_streak, longest_streak);
            }
        }

        return longest_streak;
    }
};

*/