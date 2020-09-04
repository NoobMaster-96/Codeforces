#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
    int t;
    cin>>t;
    while(t--){
    	int n;
        cin>>n;
        vector<string> s(n);
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        vector<int> freq(26,0);
        for(int i=0;i<n;i++){
            int len = s[i].length();
            for(int j=0;j<len;j++){
                freq[s[i][j]-'a'] += 1;
            }
        }
        bool flag = true;
        for(int i=0;i<26;i++){
            if(freq[i]%n!=0){
                flag = false;
                break;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}