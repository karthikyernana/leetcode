class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n=nums.size();
        int b=0;
        for(int i=0;i<n;i++){ 
            int a=nums[i];
            int c=0;
            while(a>0){
                c++;
                a/=10;
            }
            if(c%2==0){
                b++;
            }
            c=0;
        }
        return b;
    }
};