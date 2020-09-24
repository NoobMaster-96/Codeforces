#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define lli long long int

int main(){
    int t;
    cin>>t;
    while(t--){
        lli x;
        cin>>x;
        if(x==1){
            cout<<1<<endl;
            continue;
        }
        lli n = (-1+sqrt(1+8*x))/2;
        lli cnt = 0;
        lli j = 0;
        while(1){
            lli i = 1ll<<j;
            i -= 1;
            lli val = i*(i+1)/2;
            if(x-val>=0){
                x -= val;
                cnt++;
                j++;
            }else{
                break;
            }
        }
        cnt--;
        cout<<cnt<<endl;
    }
}