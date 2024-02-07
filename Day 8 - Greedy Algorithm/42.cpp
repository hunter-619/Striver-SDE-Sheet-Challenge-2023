/*
42. N meetings in one room
Time Complexity : O(NLogN)
Space Complexity : O(N)

class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        vector<pair<int,int>> meetings;
        for(int i=0; i< n; i++) {
            meetings.push_back(make_pair(start[i], end[i]));
        }
        
        sort(meetings.begin(), meetings.end(), [](pair<int,int> A, pair<int, int> B){return A.second < B.second;});
        
        int ans = 1, meet = meetings[0].second;
        for(int i = 1; i < n; i++) {
            if(meet  < meetings[i].first){
                meet = meetings[i].second;
                ans++;
            } 
        }
        
        return ans;
    }
};

*/