class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        map<int,int> mp;
        int i=0;
        while(i<numbers.size()){
            int val=target-numbers[i];
            if(mp.find(val)==mp.end()){
                mp[numbers[i]]=i;
                i++;
            }
            else{
                ans.push_back(mp[val]+1);
                ans.push_back(i+1);
                
                

                return ans;
            }
        }
        return ans;
    }
};