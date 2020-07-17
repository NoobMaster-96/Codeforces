#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define lli long long int
 
int main(){
    int n;
    cin>>n;
    map<int,vector<int>> m;
    for(int i=0;i<n;i++){
        int a,c;
        cin>>a>>c;
        m[c].push_back(a);
    }
    bool flag = true;
    for(auto x:m){
        vector<int> temp = x.second;
        sort(temp.begin(),temp.end());
        if(temp!=x.second){
            flag = false;
            break;
        }
    }
    if(flag){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}