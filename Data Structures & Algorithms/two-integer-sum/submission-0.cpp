class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // int s = 0, e = nums.size()-1;
        // while(s < e){
        //     int sum = nums[s] + nums[e];
        //     if(sum == target) return {s, e};
        //     if(sum > target) e--;
        //     else s++;
        // }
        // return {};

        unordered_map<int, int> mp;
        for(int i=0; i<nums.size(); i++){
            int diff = target - nums[i];
            if(mp.find(diff) != mp.end()) return {mp[diff], i};
            else mp.insert({nums[i], i}); 
        }
        return {};
    }
};
