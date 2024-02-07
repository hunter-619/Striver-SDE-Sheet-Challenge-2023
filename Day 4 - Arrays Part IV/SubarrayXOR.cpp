/*

23. Count number of subarrays with xor k
Time Complexity : O(NLogN) / O(N)
Space Complexity : O(N)

int Solution::solve(vector<int> &A, int B) {
    int ans = 0;
    
    map<int, int> mp;
    int xorr = 0;
    for(int i = 0; i < A.size(); i++) {
        xorr ^= A[i];
        
        if(xorr == B) ans++;
        
        if(mp.find(xorr^B) != mp.end()) {
            ans += mp[xorr^B];
        }
        
        mp[xorr]++;
    }
    
    return ans;
}

*/