class NumArray {
public:
    vector<int> p;
    int ans=0;

    NumArray(vector<int>& nums) {
        p.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            p.push_back((p[i-1]+nums[i]));
        }
    }
    
    int sumRange(int left, int right) {
        if(left!=0){
             ans=p[right]-p[left-1];
        }else{
                ans=p[right];
        }
       
        return ans;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */