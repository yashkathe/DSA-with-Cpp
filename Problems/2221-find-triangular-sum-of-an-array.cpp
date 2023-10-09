class Solution {
public:
    int triangularSum(vector<int>& nums) {
        
        if(nums.size() == 1)
            return nums[0];

        vector<int> temp;

        for(int i = 0; i < nums.size() - 1; i++)
        {
            temp.push_back( ( (nums[i] % 10) + (nums[i + 1] % 10) ) % 10);
        }

        return triangularSum(temp);
        
    }
};