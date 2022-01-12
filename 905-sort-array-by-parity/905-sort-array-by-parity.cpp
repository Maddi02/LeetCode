class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
               std::vector<int> a;
        std::vector<int> b;
        a.reserve(nums.size());
        for (int i = 0; i < nums.size(); i++) {
            if ((nums.at(i) % 2) == 0) {
                a.push_back(nums.at(i));
            } else {
                b.push_back(nums.at(i));
            }
        }
        for (int i = 0; i < b.size(); i++) {
            a.push_back(b.at(i));
        }
        return a;
    }
            
};