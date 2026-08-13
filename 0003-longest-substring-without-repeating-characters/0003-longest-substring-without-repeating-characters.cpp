class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0;
        int r=0,n=s.size(),c=0,ans=0;
        unordered_map<char,int> mp;
        while(r<n){
            if(mp.find(s[r])==mp.end()){
                mp[s[r]]=r;

            }else{
                l=max(l, mp[s[r]] + 1);;
                mp[s[r]]=r;
                
            }
            ans=max(ans,r-l+1);   
            r++;             
        }
        return ans;
    }
};