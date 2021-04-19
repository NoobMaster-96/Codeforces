#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
    int n,k;
    cin>>n>>k;
    string ans = "a";
    int len = 1;
    vector<vector<bool>> used(k,vector<bool>(k,false));
    while(len<=((k*k)-1) && len<n){
        int i = ans[len-1]-'a';
        for(int j=0;j<k;j+=1){
            if(!used[i][j]){
                ans += ('a'+(i+j)%k);
                used[i][j] = true;
                break;
            }
        }
        len +=1;
    }
    if(len<n){
        int m = (n-len)/len;
        int l = (n-len)%len;
        string temp = ans;
        for(int i=0;i<m;i+=1){
            ans += temp;
        }
        for(int i=0;i<l;i+=1){
            ans += temp[i];
        }
    }
    cout<<ans;
}