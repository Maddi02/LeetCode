class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
             std::vector<int> b(nums.begin(),nums.end());
            std::vector<int> index;
            std::sort(b.begin(), b.end());
            for(int i = 0 ; i < nums.size() ; i++)
            {
                if(b.at(i) == target)
                {
                    index.push_back(i);
                }
            }
            return index;
    }
};