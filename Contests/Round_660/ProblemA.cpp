#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
    int t;
    cin>>t;
    while(t--){
    	int n;
        cin>>n;
        if(n<31){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            if(n&1){
                cout<<6<<" "<<10<<" "<<14<<" "<<(n-30)<<endl;
            }
            else{
                cout<<6<<" "<<10<<" ";
                if(n-16==30){
                    cout<<14<<" "<<(n-30)<<endl;
                }
                else{
                    cout<<15<<" "<<(n-31)<<endl;
                }
            }
        }
    }
}