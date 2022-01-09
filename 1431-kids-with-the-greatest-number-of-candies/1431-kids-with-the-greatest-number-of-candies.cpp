class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        std::vector <bool> moreCandies;
        int maxCandies = *max_element(candies.begin(), candies.end());
        for(auto x : candies){
            if((x+extraCandies) >= maxCandies)
                moreCandies.push_back(1);
            else
                moreCandies.push_back(0);
        }
        return moreCandies;
    }
};