    string reverseWords(string S) 
    { 
        stack<string> st;
        string temp = "";
        for(int i = 0; i < S.size(); i++){
            if(S[i] == '.')st.push(temp), temp = "";
            else
                temp += S[i];
        }
        st.push(temp);
        string ans = "";
        while(!st.empty()){
            temp = st.top();
            st.pop();
            ans += temp;
            if(!st.empty())ans += ".";
        }
        return ans;
    }
