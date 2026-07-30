class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum=0;
        
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
         double mx=sum;
         int j=0;
        for(int i=k;i<nums.size();i++){
            sum=(nums[i]+sum-nums[j]);
            j++;
            mx=max(mx,sum);
        }
        return mx/k;
    }
};