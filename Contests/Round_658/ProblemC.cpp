#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a,b;
        cin>>a>>b;
        vector<int> ans;
        int i,j;
        for(i=n-1;i>=0;i--){
            if(a[i]!=b[i]){
                if(a[0]==b[i]){
                    ans.push_back(1);
                    a[0] = char(1-(a[0]-'0')+'0');
                }
                ans.push_back(i+1);
                vector<char> s;
                for(int j=0;j<=i;j++){
                    if(a[j]=='0'){
                        s.push_back('1');
                    }
                    else{
                        s.push_back('0');
                    }
                }
                int idx = 0;
                for(j=i;j>=0;j--){
                    a[j] = s[idx++];
                }
            }
        }
        int l = ans.size();
        cout<<l<<" ";
        for(int i=0;i<l;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}