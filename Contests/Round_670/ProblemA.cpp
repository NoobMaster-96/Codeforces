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
        vector<int> m(101);
    	for(int i=0;i<n;i+=1){
            cin>>a[i];
            m[a[i]]++;
        }
        int ans = 0;
        int cnt = 0;
        for(int i=0;i<=100;i+=1){
            if(m[i]==0 && cnt==0){
                ans += 2*i;
                cnt += 2;
            }
            if(m[i]==1 && cnt==0){
                ans += i;
                cnt += 1;
            }
            if(m[i]==0 && cnt==1){
                ans += i;
                cnt += 1;
            }
        }
        cout<<ans<<endl;
    }
}