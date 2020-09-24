#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
    int t;
    cin>>t;
    while(t--){
    	int n;
        string a;
    	cin>>n>>a;
        bool odd = false;
        bool even = false;
        for(int i=0;i<n;i+=1){
            if(i%2==0 && a[i]%2==1){
                odd = true;
            }
            else if(i%2==1 && a[i]%2==0){
                even = true;
            }
        }
        if(n%2==1){
            if(odd){
                cout<<1<<endl;
            }
            else{
                cout<<2<<endl;
            }
        }
        else{
            if(even){
                cout<<2<<endl;
            }
            else{
                cout<<2<<endl;
            }
        }
    }
}