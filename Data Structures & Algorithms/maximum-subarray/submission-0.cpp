class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = INT_MIN, n = nums.size();
        // for(int i=0; i<n; i++){
        //     int curr = 0;
        //     for(int j=i; j<n; j++){
        //         curr += nums[j];
        //         maxSum = max(maxSum, curr);
        //     }
        // }
        // return maxSum;

        int currSum = 0;
        for(int num : nums){
            if(currSum < 0){
                currSum = 0;
            }
            currSum += num;
            maxSum = max(maxSum, currSum);
        }
        return maxSum;
    }
};
