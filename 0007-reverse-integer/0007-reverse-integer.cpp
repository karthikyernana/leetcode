class Solution {
public:
    int reverse(int x) {
    
        if(x%10==0){
            x/=10;
        }
        int rev=0;
        while(x!=0){
            int b=x%10;
            x/=10;
                if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && b > 7)) return 0;
            // overflow check for negative side
            if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && b < -8)) return 0;
            rev=rev*10+b;
        }
        return rev;
        
    }
};