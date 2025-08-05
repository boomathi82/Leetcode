class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSoFar = nums[0];
        int currMax = nums[0];
        for(int i = 1; i < nums.size(); i++){
            currMax = max(nums[i], currMax + nums[i]);
            maxSoFar = max(maxSoFar, currMax);
        }
        return maxSoFar;
    }
};