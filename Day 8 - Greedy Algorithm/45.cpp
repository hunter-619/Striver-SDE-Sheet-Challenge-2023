/*
45. Fractional Knapsack

Time Complexity : O(nlogn)
Space Complexity : O(1)

bool compare(Item &a, Item &b) {
    return ((double)a.value/(double)a.weight) > ((double)b.value/(double)b.weight);
}

class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        sort(arr, arr+n, compare);
        
        double max_value = 0.0;
        for(int i = 0; i < n; i++) {
            if(arr[i].weight <= W) {
                max_value += arr[i].value;
                W -= arr[i].weight;
            }
            else{
                max_value += arr[i].value*(W/(double)arr[i].weight);
                break;
            }
        }  
        
        return max_value;
    }
        
};

*/