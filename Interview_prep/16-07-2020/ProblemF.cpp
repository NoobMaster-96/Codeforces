#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define lli long long int

int main(){
	lli a,b,c,d;
    cin>>a>>b>>c>>d;
    lli ans = 0;
    for(lli z=c;z<=d;z++){
    lli mn = max(a,z-c + 1);
    if(mn > b)continue;
 
    lli mn2 = max(b,z - mn + 1);
 
    lli ter = (b - mn + 1);   
 
    lli put1 = min(ter,mn2 - b + 1);
 
    lli a1 = c - mn2 + 1;
 
    ans+=(put1*(a1 + a1 + put1 - 1) / 2);
 
    ter-=put1;
    ans+=ter*(c-b+1);
 
  }
    cout<<ans;
}