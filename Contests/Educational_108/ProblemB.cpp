#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define endl "\n"

int cntdigits(int n){
    int ans = 0;
    while(n>0){
        n/=10;
        ans+=1;
    }
    return ans;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int gcd = 1;
        for(int i=1;i<c;i+=1){
            gcd *= 10;
        }
        int x = gcd;
        int y = gcd;
        while(!(cntdigits(x)==a)){
            x *= 3;
        }
        while(!(cntdigits(y)==b)){
            y *= 7;
        }
        cout<<x<<" "<<y<<endl;
    }
}