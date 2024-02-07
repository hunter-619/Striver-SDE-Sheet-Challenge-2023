/*

22. Longest Subarray with sum 0
Time Complexity : O(N)
Space Complexity : O(N)

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        map<int, int> mp;
        int maxi = 0;
        int sum = 0;
        
        for(int i = 0; i < n; i++) {
            sum += A[i];
            if(sum == 0){
                maxi = i + 1;
            }
            else{
                if(mp.find(sum) != mp.end()) {
                    maxi = max(maxi, i - mp[sum]);
                }
                else {
                    mp[sum] = i;
                }
            }
        }
        
        return maxi;
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}

*/