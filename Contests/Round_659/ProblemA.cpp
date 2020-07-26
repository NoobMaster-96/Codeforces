#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
    int t;
    cin>>t;
    while(t--){
    	int n;
        cin>>n;
        vector<int> a(n);
        vector<string> s;
        int len = 0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            len = max(len,a[i]);
        }
        len++;
        string str = "";
        for(int i=0;i<len;i++){
            str += 'a';
        }
        s.push_back(str);
        for(int i=0;i<n;i++){
            string temp = s[i];
            if(s[i][a[i]]=='z'){
                temp[a[i]] = 'a';
            }
            else{
                temp[a[i]] = s[i][a[i]] + 1;
            }
            s.push_back(temp);
        }
        for(int i=0;i<=n;i++){
            cout<<s[i]<<endl;
        }
    }
}