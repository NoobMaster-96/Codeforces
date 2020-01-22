#include <bits/stdc++.h>

using namespace std;

// Complete the isBalanced function below.
string isBalanced(string s) {
    stack <char> st;
    int len = s.length();
    for(int i=0; i<len; i++){
        if(s[i] == '{' || s[i] == '[' || s[i] == '('){
            st.push(s[i]);
        }
        else{
            if(s[i] == '}'){
                if(st.empty()){
                    return "NO";
                }
                if(st.top() == '{'){
                    st.pop();
                }
                else{
                    return "NO";
                }
            }
            else if(s[i] == ']'){
                if(st.empty()){
                    return "NO";
                }
                if(st.top() == '['){
                    st.pop();
                }
                else{
                    return "NO";
                }
            }
            else if(s[i] == ')'){
                if(st.empty()){
                    return "NO";
                }
                if(st.top() == '('){
                    st.pop();
                }
                else{
                    return "NO";
                }
            }
        }
    }
    if(!st.empty()){
        return "NO";
    }
    return "YES";
}

int main()
{

    int t;
    cin >> t;
    while(t--){
        string str;
        cin>>str;
        cout<<isBalanced(str)<<endl;
    }
    return 0;
}
