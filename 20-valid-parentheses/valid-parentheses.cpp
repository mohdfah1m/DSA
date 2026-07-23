#include<string.h>
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(char c:s){
            if(c=='(' or c=='{' or c=='['){
                st.push(c);
            }else{
                if(st.empty())
                    return false;
                
                if((c==')' && st.top()!='(') or 
                (c=='}' && st.top()!='{') or 
                (c==']' && st.top()!='[')){
                    return false;
                }
                st.pop();
            }
        }
        return st.empty();
    }
};