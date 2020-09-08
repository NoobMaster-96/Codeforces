#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define lli long long int

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        lli ans = 0;
        lli num = 0;
        for(int i=0;i<n;i++){
            if(a[i]>=0){
                num += (lli)a[i];
            }
            else{
                lli diff = abs(a[i]);
                if(num>=diff){
                    num -= diff;
                }
                else{
                    ans += (lli)abs(a[i])-num;
                    num = 0;
                }
            }
        }
        cout<<ans<<endl;
    }
}