class Solution {
public:
    bool same(int ar[],int ar1[]){
        for(int i=0;i<26;i++){
            if(ar[i]!=ar1[i]){
                return false;
            }
        }
        return true;
    }
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        int ar[26]={0};
        int ar1[26]={0};
        int n=p.size();
        int m=s.size();
        if(n>m){
            return ans;
        }
        for(int i=0;i<n;i++){
            ar[p[i]-'a']++;
            ar1[s[i]-'a']++;
            if(i==n-1){
            if(same(ar,ar1)){
            ans.push_back(i-n+1);
            }
            }     
        }
        for(int i=n;i<m;i++){
            ar1[s[i]-'a']++;
            ar1[s[i-n]-'a']--;
            
            if(same(ar,ar1)){
            ans.push_back(i-n+1);
            }
        
        }
        return ans;     
    }
};