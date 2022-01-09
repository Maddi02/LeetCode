class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int sum = 0;
        int max = 0;
        for (auto &in: accounts) {
            sum = 0;
            for (int i = 0; i < in.size(); i++) {
                sum += in.at(i);
            }
            if (sum > max) {
                max = sum;
            }
        }
        return max;
    }
};