class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0, right = heights.size() - 1, maximum_capacity = INT_MIN, minimum_height = INT_MAX;
        while(left < right){
            minimum_height = min(heights[left], heights[right]);
            int area = minimum_height*(right - left);
            maximum_capacity = max(maximum_capacity, area);
            if(heights[left] < heights[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return maximum_capacity;
    }
};
