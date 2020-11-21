#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define lli long long int

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        stack<char> s1;
        stack<char> s2;
        int len = s.length();
        int i=0;
        int ans = 0;
        while(i<len){
            if(s[i]=='('){
                s1.push(s[i]);
            }
            else if(s[i]=='['){
                s2.push(s[i]);
            }

            if(s[i]==')' && !s1.empty()){
                s1.pop();
                ans++;
            }
            else if(s[i]==']' && !s2.empty()){
                s2.pop();
                ans++;
            }
            i++;
        }
        cout<<ans<<endl;
    }
}