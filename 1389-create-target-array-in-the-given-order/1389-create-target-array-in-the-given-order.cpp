class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
                std::vector<int> a;
        for(int i = 0 ; i < nums.size() ; ++i)
        {
              a.insert(a.begin() + index.at(i), nums.at(i));
        }
        return a;
    }
};