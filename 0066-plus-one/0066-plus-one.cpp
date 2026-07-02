class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
int carry = 0;
vector<int> ans;
for(int i=n-1; i>=0; i--){
int sum = digits[i] + carry;
if(i == n-1){
sum += 1;
}
int rem = sum % 10;
carry = sum / 10;
ans.push_back(rem);
}
if(carry == 1){
ans.push_back(1);
}
reverse(ans.begin(), ans.end());
return ans;
    }
};