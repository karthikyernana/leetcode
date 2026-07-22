class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        for(int i=1;i<nums.size();i++){
            nums[i]+=nums[i-1];
        }
        for(int i=0;i<nums.size();i++){
            if(nums.size()==1){
                return 0;
            }
            if(nums.size()==0){
                return -1;
            }
            
            
            if(i<1 && nums[nums.size()-1]-nums[0]==0){
                return 0;
                
            }else if(i==nums.size()-1 && nums[nums.size()-2]==0){
                return nums.size()-1;
            }
            if(i==0){
                i++;
            }
            if(nums[i-1]== nums[nums.size()-1]-nums[i]){
                return i;

            }
        }
        return -1;
    }
};