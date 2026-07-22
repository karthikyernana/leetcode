class Solution {
public:
    int pivotIndex(vector<int>& nums) {
         if(nums.size()==1){
                return 0;
            }
        for(int i=1;i<nums.size();i++){
            nums[i]+=nums[i-1];
        }    
        for(int i=0;i<nums.size();i++){
           
            if(i==0){
                if(nums[nums.size()-1]-nums[0]==0){
                    return 0;
                }
            }else if(i==nums.size()-1){
                if(nums[nums.size()-2]==0){
                    return nums.size()-1;
                }
            }else if(nums[i-1]== nums[nums.size()-1]-nums[i]){
                return i;
            }
        }
        return -1;
    }
};