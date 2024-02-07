/*
47. N meetings in a room

Time Complexity : O(nlogn)
Space Complexity : O(n)

class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        vector<pair<int, int>> arr;
        for(int i = 0; i < n; i++) {
            arr.push_back(make_pair(start[i], end[i]));
        }
        
        sort(arr.begin(), arr.end(), [](auto &left, auto &right) {return left.second < right.second;});
        
        int ans = 1, end_time = arr[0].second;
        
        for(int i = 1; i < n; i++) {
            if(arr[i].first > end_time) {
                ans++;
                end_time = arr[i].second;
            }    
        }
        
        return ans;
    }
};
*/