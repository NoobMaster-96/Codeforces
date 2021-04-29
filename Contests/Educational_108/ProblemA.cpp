#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
    int t;
    cin>>t;
    while(t--){
    	int n;
        cin>>n;
        int r;
        int cnt = 0;
        for(int i=0;i<n;i+=1){
            cin>>r;
            if(r==1 || r==3){
                cnt+=1;
            }
        }
        cout<<cnt<<endl;
    }
}