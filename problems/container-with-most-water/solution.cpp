class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0;
        int r = height.size() - 1;
        int max_amount = 0;
        while (l<r) {
            if (height[l] <= height[r]) {
                max_amount = max(max_amount, height[l]*(r-l));
                l++;
            }
            else {
                max_amount = max(max_amount, height[r]*(r-l));
                r--;
            }
        }
        return max_amount;
    }
};