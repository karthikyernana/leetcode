class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        map<int,vector<int>> rmp;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
           mp[nums[i]]++;
        }
        for( auto &[val,count]:mp){
            rmp[count].push_back(val);
        }
        auto it=rmp.rbegin();
        while(it!=rmp.rend()&& ans.size()<k){
            for(int num:it->second){
                ans.push_back(num);
                if (ans.size() == k) break;
            }
            
            it++;
    }
        

        return ans;
    }
};