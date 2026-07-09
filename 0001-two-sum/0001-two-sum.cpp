class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int n=nums.size();
        unordered_map<int, int> tab;
        
        for(int i=0;i<n;i++){
            int k=target-nums[i];
            if(tab.contains(k)){
                return {i,tab.at(k)};
            }else{
                tab[nums[i]]=i;
            }

        }
        return {0};
    }
};