class Solution {
public:
    int maxArea(vector<int>& height) {
        int area = 0, l = 0, r = height.size() - 1;
        while (l < r) {
            area = max(area, (r - l) * min(height[l], height[r]));
            if (height[l] < height[r])
                l++;
            else
                r--;
        }
        return area;
    }
};
