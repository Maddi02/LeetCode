class Solution {
public:
    
    void getPerms(int index, vector<int> &nums, int n, vector<vector<int>> &res) {
        
        if(index == n) {
            res.push_back(nums);
            return;
        }
        
        for(int i = index; i < n; i++) {
            
            swap(nums[i], nums[index]);
            
            getPerms(index+1, nums, n, res);
            
            swap(nums[i], nums[index]);
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<vector<int>> res;
        
        getPerms(0, nums, nums.size(), res);
        return res;
    }
};