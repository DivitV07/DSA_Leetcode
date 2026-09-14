class Solution {
public:
    vector<int> findErrorNums(vector<int>& arr) {
        long long n = arr.size(); 
        long long Sn = (n * (n + 1)) / 2; 
        long long S2n = (n * (n + 1) * (2 * n + 1)) / 6; 
        long long S = 0, S2 = 0; 
        for (int i = 0; i < n; i++) { 
            S += arr[i]; 
            S2 += (long long)arr[i] * arr[i]; 
        }
        long long val1 = S - Sn;
        long long val2 = S2 - S2n;
        val2 = val2 / val1;
        long long repeating = (val1 + val2) / 2;
        long long missing = repeating - val1;
        return {(int)repeating, (int)missing};
    }
};