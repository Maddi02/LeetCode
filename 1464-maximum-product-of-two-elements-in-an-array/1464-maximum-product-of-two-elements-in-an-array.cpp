class Solution {
public:
    int maxProduct(vector<int>& nums) {
         int save = 0;
        int current = 0;
        int currentValue = 0;
        for (int i = 0; i < nums.size(); i++) {
            current = nums[i];
            for (int j = i + 1; j < nums.size(); j++) {
                currentValue = (current - 1) * (nums.at(j) - 1);
                if (currentValue > save) {
                    save = currentValue;
                }
            }
        }
        return save;
    }
};