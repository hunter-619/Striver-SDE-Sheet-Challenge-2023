/*
46. Minimum coins

Time Complexity : O(n)
Space Complexity : O(1)

vector<int> MinimumCoins(int n)
{
    vector<int> currency = {1000,500,100,50,20,10,5,2,1};
    int arr[9] = {0};

    vector<int> ans;
    for(int i = 0; i < 9; i++) {
        if(n > 0 && currency[i] <= n) {
            arr[i] = n / currency[i];
            n %= currency[i];
        }
    }

    for(int i = 0; i < 9; i++) {
        for(int j = 0; j < arr[i]; j++) {
            ans.push_back(currency[i]);
        }
    }

    return ans;
}

*/