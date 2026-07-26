class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int len = s.length();
        for(int i=0; i<len; i++){
            char ch = s[i];
            if(ch == '(' || ch == '{' || ch == '['){ //opening
                st.push(ch);
            }else{ //closing
                if(st.size() == 0) return false;
                if(st.top() == '(' && ch == ')' || st.top() == '[' && ch == ']' || st.top() == '{' && ch == '}'){
                    st.pop();
                }else{
                    return false;
                }
            }
        }
        return st.size() == 0;
    }
};
