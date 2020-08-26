#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
    int t;
    cin>>t;
    while(t--){
    	int n,k;
        cin>>n>>k;
        if(n<=k){
            cout<<abs(n-k)<<endl;
        }
        else{
            if(!k){
                if(n&1){
                    cout<<1<<endl;
                }
                else{
                    cout<<0<<endl;
                }
                continue;
            }
            if(k&1){
                if(n&1){
                    cout<<0<<endl;
                }
                else{
                    cout<<1<<endl;
                }
            }
            else{
                if(!(n&1)){
                    cout<<0<<endl;
                }
                else{
                    cout<<1<<endl;
                }
            }
        }
    }
}