class Solution {
public:
    bool same(int arr1[],int arr2[]){
        for(int i=0;i<26;i++){
            if(arr1[i]!=arr2[i]){
                return false;
            }
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {

        
        int n=s1.size();
        int m=s2.size();
        int arr1[26]={0};
        int arr2[26]={0}; 
        if(m<n){
            return false;
        }
       for(int i=0;i<n;i++){
        arr1[s1[i]-'a']++;
        arr2[s2[i]-'a']++;
       }
       if(same(arr1,arr2)){
        return true;
       }
       for(int i=n;i<s2.size();i++){
        arr2[s2[i]-'a']++;
        arr2[s2[i-n]-'a']--;
        if(same(arr1,arr2)){
        return true;
       }
       }
       return false;
    }
};