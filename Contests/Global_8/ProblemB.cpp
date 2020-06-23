#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define lli long long int

lli ans[11] = {0};

lli solve(){
    lli val = 1,i;
    for(i=0;i<10;i++){
        val *= ans[i];
    }
    return val;
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    lli n;
    cin>>n;
    string s = "codeforces";
    lli i;
    while(n>solve()){
        i = 0;
        while(i<10 && n>solve()){
            ans[i]++;
            i++;
        }
    }
    lli j;
    string str = "";
    for(i=0;i<10;i++){
        for(j=0;j<ans[i];j++){
            str += s[i];
        }
    }
    cout<<str;
}