class Solution
{
public:


    vector<int> res;
    
    void helper(vector<int>& arr, int N, int idx, int sum){
        if(idx == N){
            res.push_back(sum);
            return;
        }
        
        helper(arr, N, idx + 1, sum + arr[idx]);
        helper(arr, N, idx + 1, sum);
    }


    vector<int> subsetSums(vector<int> arr, int N)
    {
        helper(arr, N, 0, 0);
        sort(res.begin(), res.end());
        return res;
    }
}
