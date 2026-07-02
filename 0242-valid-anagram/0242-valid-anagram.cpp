class Solution {
public:
    bool isAnagram(string s, string t) {
        bool a=1; 
        if(s.length()!=t.length()){
            a=0;
            return a;
        }
        vector<int> frequency(26,0);
        for(int i=0;i<s.length();i++){
            frequency[s[i]-'a']++;
            frequency[t[i]-'a']--;
        }
        for(int i=0;i<26;i++){
            if(frequency[i]!=0){
                a=0;
                return a;
            }
        }
        return a;
    }
};