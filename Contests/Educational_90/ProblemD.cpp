#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define lli long long int

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t;
	cin>>t;
	while(t--){
		int n;
        cin>>n;
        vector<int> a(n);
        lli sume = 0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(i%2==0){
                sume += (lli)a[i];
            }
        }
        lli ans = sume;
        lli temp = 0;
        for(int i=0;i+1<n;i+=2){
            temp += (lli)(a[i+1]-a[i]);
            if(temp<0){
                temp = 0;
            }
            ans = max(ans,sume+temp);
        }
        temp = 0;
        for(int i=1;i+1<n;i+=2){
            temp += (lli)(a[i]-a[i+1]);
            if(temp<0){
                temp = 0;
            }
            ans = max(ans,sume+temp);
        }
        cout<<ans<<endl;
	}
}