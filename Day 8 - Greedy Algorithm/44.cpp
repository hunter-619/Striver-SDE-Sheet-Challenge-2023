/*
44. Job Sequencing Problem

Time Complexity : O(n^2)
Space Complexity : O(n)

bool compare(Job a, Job b)
{
    return a.profit > b.profit;
}

class Solution 
{
    public:
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        int slot[n] = {0};
        
        sort(arr, arr + n, compare);
        
        int slot_alloc = 0;
        int max_profit = 0;
        
        for(int i = 0; i < n; i++) {
            if(slot[arr[i].dead-1] == 0) {
                slot[arr[i].dead-1] = 1;
                slot_alloc++;
                max_profit += arr[i].profit;
            }
            else {
                for(int j = arr[i].dead-1; j >= 0; j--) {
                    if(slot[j] == 0){
                        slot[j] = 1;
                        slot_alloc++;
                        max_profit += arr[i].profit;
                        break;
                    }
                }
            }
        }
        
        return {slot_alloc, max_profit};
    } 
};
*/