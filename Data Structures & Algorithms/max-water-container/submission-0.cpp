class Solution {
public:
    int maxArea(vector<int>& heights) {
        int area = INT_MIN;
        int n = heights.size();
        int s = 0, e = n-1;
        while(s<e){
            area = max(area, min(heights[s],heights[e]) * (e-s));

            if(heights[s]<heights[e]) s++;
            else e--;
        }

        return area;
    }
};
