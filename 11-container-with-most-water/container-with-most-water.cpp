class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int i = 0;
        int j = n-1;
        int maxW =0,high,area = 0;
        while(i<j){
            int width = j-i;
            high= min(height[i],height[j]);
            area = width*high;
            maxW=max(maxW,area);
            if(height[i]<height[j]){
                i++;
            }else {
                j--; 
                }
        }
        return maxW;
    }
};