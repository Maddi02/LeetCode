class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int k;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        for(auto it: mp)
        {
            if(it.second==1)
            {
                k=it.first;
            }
        }
        return k; 
    }
};