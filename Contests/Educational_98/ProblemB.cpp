#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define endl "\n"

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<lli> a(n);
        lli maxboxes = 0;
        lli sum = 0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            maxboxes = max(maxboxes,a[i]);
            sum += a[i];
        }
        lli maxb = maxboxes*(lli)(n-1);
        lli tb = sum;
        if(sum%(n-1)!=0){
            tb += (n-1)-(sum%(n-1));
        }
        cout<<max(tb,maxb)-sum<<endl;
    }
}