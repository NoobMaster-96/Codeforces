#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
    int t;
    cin>>t;
    while(t--){
    	vector<int> a(3);
        for(int i=0;i<3;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        if(a[0]==a[2]){
            cout<<"YES"<<endl;
            cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
        }
        else if(a[0]<a[1] && a[2]==a[1]){
            cout<<"YES"<<endl;
            cout<<a[0]<<" "<<a[0]<<" "<<a[2]<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}