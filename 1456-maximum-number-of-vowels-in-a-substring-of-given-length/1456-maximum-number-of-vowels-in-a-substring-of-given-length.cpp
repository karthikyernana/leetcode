class Solution {
public:
    int maxVowels(string s, int k) {
        int sum=0;
        for(int i=0;i<k;i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                sum++;
            }
        }
        int a=0;
        int mx=sum;
        for(int i=k;i<s.size();i++){
            
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                sum++;
            }

            if(s[a]=='a'||s[a]=='e'||s[a]=='i'||s[a]=='o'||s[a]=='u'){
                sum--;
            }
            mx=max(mx,sum);

            a++;
        }
        return mx;
    }
};