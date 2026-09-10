class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        unordered_map<int,int> pre;
        unordered_map<int,int> suf;
        vector<int> ans;
        int l=0;int r=nums.size()-1;
        pre[-1]=1;
        suf[nums.size()]=1;

        while(l<nums.size()){
            pre[l]=nums[l]*pre[l-1];
            suf[r]=nums[r]*suf[r+1];
            l++;
            r--;
        }

        for(int i=0;i<nums.size();i++){
            ans.push_back(pre[i-1]*suf[i+1]);
        }    
        return ans;
    }
};