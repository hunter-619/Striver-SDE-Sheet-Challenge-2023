/*

18. Reverse Pairs
Time Complexity : O(N*LogN)
Space Compelexity : O(N)

class Solution {
public:

    int countPair(vector<int>& nums, int low, int mid, int high) {
        int cnt = 0;
        int right = mid + 1;
        for(int i = low; i <= mid; i++) {
            while(right <= high && (long long)nums[i] > 2 * (long long)nums[right]) right++;
            cnt += (right - mid - 1);
        }

        return cnt;
    }

    void merge(vector<int>& nums, int low, int mid, int high) {
        vector<int> temp;
        int left = low;
        int right = mid+1;
        while(left <= mid && right <= high) {
            if(nums[left] < nums[right]) {
                temp.push_back(nums[left++]);
            }
            else {
                temp.push_back(nums[right++]);
            }
        }

        while(left <= mid) {
            temp.push_back(nums[left++]);
        }

        while(right <= high) {
            temp.push_back(nums[right++]);
        }

        for(int i = low; i <= high; i++){
            nums[i] = temp[i - low];
        }
    }

    int mergeSort(vector<int>& nums, int left, int right) {
        int cnt = 0;
        if(left >= right) return cnt;
        int mid = (left + right) / 2;
        
        cnt += mergeSort(nums, left, mid);
        cnt += mergeSort(nums, mid+1, right);
        cnt += countPair(nums, left, mid, right);
        merge(nums, left, mid, right);

        return cnt;
    }

    int reversePairs(vector<int>& nums) {
        return mergeSort(nums, 0, nums.size() - 1);
    }
};

*/