class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
    int j=0;
    for(int i=0;i<nums.size();i++)
	{
        if(nums.at(i)%2==0)
		{
            swap(nums.at(i),nums.at(j));
            j++;
		}
	}
    return nums;
    }
            
};