/*

24. Longest Substring without repeating characters
Time Complexity : O(NLogN) / O(N)
Space Complexity : O(N)

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, int> mp;
        int i = 0, j = 0;
        int ans = 0;

        while(j < s.length()) {
            if(mp[s[j]] == 0) {
                mp[s[j]]++;
                ans = max(ans, j - i + 1);
            }
            else {
                while(mp[s[j]] != 0) {
                    mp[s[i++]]--;
                }
                mp[s[j]]++;
            }
            j++;
        }

        return ans;
    }
};

*/