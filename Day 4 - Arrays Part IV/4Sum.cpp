/*

20. 4 Some
Time Complexity : O(N^3)
Space Complexity : O(1)

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());

        for(int i = 0; i < nums.size(); i++) {
            if(i == 0 || (i > 0 && nums[i] != nums[i-1])) {
                for(int j = i+1; j < nums.size(); j++) {
                    if(j == i + 1 || (j > i + 1 && nums[j] != nums[j - 1])) {
                        int lo = j + 1, hi = nums.size() - 1;

                        while(lo < hi){
                            long long sum = nums[lo];
                            sum += nums[hi];
                            sum += nums[i];
                            sum += nums[j];
                            if(sum == target) {
                                vector<int> temp = {nums[i], nums[j], nums[lo], nums[hi]};
                                ans.push_back(temp);
                                lo++; hi--;

                                while(lo < hi && nums[lo] == nums[lo - 1]) lo++;
                                while(lo < hi && nums[hi] == nums[hi + 1]) hi--;
                            
                            }
                            else if(sum < target){
                                lo++;
                            }
                            else{
                                hi--;
                            }
                        }
                    }
                }
            }
        }

        return ans;
    }
};

*/