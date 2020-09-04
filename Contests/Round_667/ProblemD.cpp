#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define lli long long int

int main(){
    int t;
    cin>>t;
    while(t--){
        string n;
        int s;
        cin>>n>>s;
        int len = n.length();
        int sum = 0;
        int i=0;
        for(;i<len;i++){
            sum += n[i] - '0';
            if(sum>=s){
                break;
            }
        }
        sum = 0;
        lli temp = 0;
        for(int j=0;j<len;j++){
            sum += n[j] - '0';
            temp *= (lli)10;
            temp += (lli)(n[j] - '0');
        }
        if(sum<=s){
            cout<<0<<endl;
            continue;
        }
        if(i==0){
            lli num = 1;
            for(int j = 0;j<n.size();j+=1){
                num *= 10;
            }
            lli ans = num-temp;
            cout<<ans<<endl;
        }
        else{
            lli nxt = 0;
            lli n1 = 0;
            for(int j=0;j<i;j++){
                nxt *= 10;
                nxt += (n[j]-'0');
            }
            n1 = nxt;
            nxt += 1;
            for(int j=i;j<n.size();j++){
                nxt *= 10;
                n1 *= 10;
                n1 += n[j]-'0';
            }
            lli ans = nxt-n1;
            cout<<ans<<endl;
        }
    }
}
