class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
            
        for(int i = 0 ; i < nums.size() ; i++)
        {
            nums.at(i) = std::pow(nums.at(i),2);
        }
            std::sort(nums.begin(), nums.end()); 
        return nums;
    }
};