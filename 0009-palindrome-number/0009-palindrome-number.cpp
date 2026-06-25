class Solution {
public:
    bool isPalindrome(int x) {
      
        string str=to_string(x);

        int left=0;
        if(x<0) return false;
        int right=str.size()-1;
        
        while(left<right){
            if(str[left]==str[right]){
                left++;
                right--;
            }
            if(str[left]!=str[right]){
                return false;
            }
            
        }
        return true;
        }

};