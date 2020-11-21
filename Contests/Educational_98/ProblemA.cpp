#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
    int t;
    cin>>t;
    while(t--){
    	int x,y;
        cin>>x>>y;
        if(y>x){
            swap(x,y);
        }
        int ans = 2*y;
        x -= y;
        if(x>0){
            ans += 2*x -1;
        }
        cout<<ans<<endl;
    }
}