class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
    int min_val = nums1[0];
        int min_odd = INT_MAX;

        for (int x : nums1) {
            min_val = min(min_val, x);
            if (x % 2 != 0) {
                min_odd = min(min_odd, x);
            }
        }
        if (min_odd == INT_MAX) return true;
        return min_val == min_odd;    
    }
};