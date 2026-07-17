class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // sort(nums.begin(), nums.end());
        // for(int i=0; i<nums.size()-1; i++){
        //     if(nums[i] == nums[i+1]) return true;
        // }
        // return false;

        unordered_set<int> st;
        for(int n : nums){
            if(st.count(n)){
                return true;
            }
            st.insert(n);
        }
        return false;
    }
};
