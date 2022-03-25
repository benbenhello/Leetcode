class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0;
        int r = height.size()-1;
        int area = 0;
        while(l<r){
            if(height[l]>height[r]){
                area = (area>height[r]*(r-l))?area:height[r]*(r-l);
                r--;
            }else if(height[l]<height[r]){
                area = (area>height[l]*(r-l))?area:height[l]*(r-l);
                l++;
            }else{
                area = (area>height[l]*(r-l))?area:height[l]*(r-l);
                l++;
                r--;
            }    
        }
        return area;
    }
};