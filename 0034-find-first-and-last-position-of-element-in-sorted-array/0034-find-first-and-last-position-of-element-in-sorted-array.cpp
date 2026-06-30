class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l=0;
        int n=nums.size();
        int r=n-1;
        int f=-1;
        int e=-1;
        while(l<=r)
        {
            int m=l+(r-l)/2;
            if(nums[m]==target){
                f=m;
                r=m-1;
            }else if(target>nums[m]){
                l=m+1;
            }else{
                r=m-1;
            }
        }
        l=0; r=n-1;
        while(l<=r)
        {
            int m=l+(r-l)/2;
            if(nums[m]==target){
                e=m;
                l=m+1;
            }else if(target>nums[m]){
                l=m+1;
            }else{
                r=m-1;
            }
        }
        return {f,e};
    }
};