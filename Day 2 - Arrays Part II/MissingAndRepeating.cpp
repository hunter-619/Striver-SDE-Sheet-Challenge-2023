/*

11. Missing and Repeating Number
Time Complexity : O(N)
Space Complexity : O(1)

vector<int> Solution::repeatedNumber(const vector<int> &A) {
    long long n = A.size();
    long long s = (n * (n + 1)) / 2;
    long long p = (n * (n + 1) * (2 * n + 1)) / 6;
    
    for(auto &x : A) {
        s -= x;
        p -= (long long)x * (long long)x;
    }
    
    long long missing_num = (p / s + s) / 2;
    long long duplicate = missing_num - s;
    
    return {duplicate, missing_num};
}

*/