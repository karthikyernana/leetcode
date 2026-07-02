class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int win=0;
        int n=nums.size();
        int ma=0;
        for(int i=0;i<k;i++){
            win=win+nums[i];
        }
        ma=win;
        for(int i=k;i<n;i++){
            win=win+nums[i]-nums[i-k];
             ma=max(win,ma);
        }
        double ans=(double)ma/k;
        return ans;
       
        
    }
};