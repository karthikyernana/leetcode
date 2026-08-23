class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mp;
        int l=0;
        int r=0;
        int mx=0;
        for(int r=0;r<s.size();r++){
            if(mp.find(s[r])!= mp.end()){
                l=max(l,mp[s[r]]+1);
            }
            mp[s[r]]=r;
            mx=max(mx,r-l+1);
        }
        return mx;
    }
};