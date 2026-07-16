class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
       
        vector<int> ans;
        int l=0;
        int r=nums.size()-1;
        while(l<=r){
            int i=nums[l]*nums[l];
            int j=nums[r]*nums[r];
            if(i>j){
                ans.insert(ans.begin(),i);
                l++;
            }
            else{
                ans.insert(ans.begin(),j);
                r--;
            }

        }

        return ans;
    }
};