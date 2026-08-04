class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max1=0;
        for(auto it : candies){
            max1=max(it,max1);
        }
        vector<bool> required;
        for(auto it : candies){
            if(max1<=it+extraCandies){
                required.push_back(true);
            }
            else{
                required.push_back(false);
            }
        }
        return required;
    }
};