class Solution {
public:
    int maxProduct(vector<int>& nums) {
   std::sort(nums.begin(), nums.end());
        return  ((nums.at(nums.size()-1) -1)  * (nums.at(nums.size()-2) -1));
    }
};