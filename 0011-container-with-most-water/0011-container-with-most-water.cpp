class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0;
        int r=height.size()-1;
        
        int mx=0;
        while(l<r){
            int h=min(height[l],height[r]);
            int w=r-l;
            int a=h*w;
            mx=max(mx,a);
            if(height[l]<height[r]){
                l++;
            }else{
                r--;
            }


        }
        return mx;
    }
};