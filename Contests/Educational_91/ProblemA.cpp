#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
    int t;
    cin>>t;
    while(t--){
    	int n;
        cin>>n;
        vector<int> a(n);
        map<int,int> m;
        for(int i=0;i<n;i++){
            cin>>a[i];
            m[a[i]] = i;
        }
        vector<int> r(n),l(n);
        l[0] = a[0];
        r[n-1] = a[n-1];
        for(int i=1;i<n;i++){
            l[i] = min(l[i-1],a[i]);
        }
        for(int i=n-2;i>=0;i--){
            r[i] = min(r[i+1],a[i]);
        }
        bool flag = false;
        for(int i=1;i<n-1;i++){
            if(a[i]>l[i-1] && a[i]>r[i+1]){
                flag = true;
                cout<<"YES"<<endl;
                cout<<m[l[i-1]]+1<<" "<<m[a[i]]+1<<" "<<m[r[i+1]]+1<<endl;
                break;
            }
        }
        if(!flag){
            cout<<"NO"<<endl;
        }
    }
}