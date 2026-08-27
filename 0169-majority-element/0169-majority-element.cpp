class Solution {
public:
    int majorityElement(vector<int>& nums) {
    int temp = 0;
    int count = 0;

    for (int x : nums) {
        if (count == 0)
            temp = x;

        if (x == temp)
            count++;
        else
            count--;
    }

    return temp;
    }
};