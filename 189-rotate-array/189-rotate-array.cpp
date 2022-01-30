class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        int size = nums.size();
        k %= size; // to get the k steps if k is more than the length of given vector(nums)
		
		/*suppose, nums[] = {1, 2, 3, 4, 5, 6, 7} and k = 3
		divide into 2 parts wrt k steps i.e.
		1, 2, 3, 4,    |     5, 6, 7
		 1st part           2nd part 
		*/
        
		// rotate 1st part(i.e. from 0 length to length - k - 1) -> 1, 2, 3, 4 --> 4, 3, 2, 1
        rotate(nums, 0, size - 1 - k);
		
		// rotate 2nd part(i.e. from  length - k to length - 1) -> 5, 6, 7 --> 7, 6, 5
        rotate(nums, size - k, size - 1);
		
		// rotate whole array(i.e from 0 length to length - 1) -> 4, 3, 2, 1, 7, 6, 5 --> 5, 6, 7, 1, 2, 3, 4 ==> Desired output
        rotate(nums, 0, size - 1);
    }
    
private:
    void rotate(vector<int>& nums, int start, int end) {
        
        while(start < end) {
            int temp = nums[start];
            nums[start++] = nums[end];
            nums[end--] = temp;
        }
    }
};