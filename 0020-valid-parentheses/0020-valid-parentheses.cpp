#include <iostream>
#include <stack>
#include <string>

class Solution { 
public: 
    bool isValid(std::string s) { 
        // An odd length string can never be valid
        if (s.size() % 2 != 0) {
            return false;
        } 
        
        std::stack<char> st; 
        
        for (int i = 0; i < s.size(); i++) { 
            // Push opening brackets onto the stack
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') { 
                st.push(s[i]); 
            } 
            // For closing brackets, check if stack is empty first to prevent crashes
            else {
                if (st.empty()) return false;
                
                if ((s[i] == ')' && st.top() == '(') ||
                    (s[i] == ']' && st.top() == '[') ||
                    (s[i] == '}' && st.top() == '{')) {
                    st.pop(); 
                } else { 
                    return false; 
                } 
            }
        } 
        
        // If the stack is empty, all brackets were matched correctly
        return st.empty(); 
    } 
};
