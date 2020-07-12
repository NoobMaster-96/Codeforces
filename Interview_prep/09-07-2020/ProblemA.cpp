#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
    int t;
    cin>>t;
    while(t--){
    	string s;
        cin>>s;
        int val = s[0]-'a';
        bool flag = true;
        for(int i=1;i<s.length();i++){
            val = (val+1)%26;
            if(val != s[i]-'a'){
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