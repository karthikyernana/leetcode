class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            return 1;
        }
        int l=0;
        int r=1;
        while(r<n){
            if(nums[l]==nums[r]){
                r++;
            }else{
                l++;
                nums[l]=nums[r];
            }
        }
        return l+1;
    }
};