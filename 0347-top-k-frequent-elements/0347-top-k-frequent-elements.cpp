class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int,int> mp;
        map<int,vector<int>> lis;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto &[num,count]:mp){
            lis[count].push_back(num);
        }
        auto it= lis.rbegin();
        while(it!=lis.rend() && ans.size()<k){
            for(int num1:it->second){
                ans.push_back(num1);
                if(ans.size()==k){
                break;
                }
            }
            
            it++;
            
        }
        return ans;

    }
};