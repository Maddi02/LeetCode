class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        std::vector<int> firstPart;
        firstPart.reserve(n);
        std::vector<int> secondPart;
        secondPart.reserve(n);
        firstPart.assign(nums.begin(), nums.end() - n);
        secondPart.assign(nums.begin() + n, nums.end());
        nums.clear();
        for(int i = 0 ; i < firstPart.size() ;i++)
        {
            nums.push_back(firstPart.at(i));
            nums.push_back(secondPart.at(i));
        }
        return nums;
    }

};