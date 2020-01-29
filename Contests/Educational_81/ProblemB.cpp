#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		string str;
		cin>>str;
		vector<int> balance(n);
		int cnt0=0,cnt1=0;
		int ans = 0;
		for(int i=0;i<n;i++){
			if(str[i]=='0'){
				cnt0++;
			}
			else{
				cnt1++;
			}
			balance[i] = cnt0-cnt1;
			if(balance[i]==x){
				ans++;
			}
		}
		if(ans>0 && balance[n-1]==0){
            cout<<-1<<endl;
            continue;
        }
        if(x==0){
            ans++;
        }
        for(int i=0;i<n;i++){
            if(balance[n-1]!=0){
                double a =(double(x-balance[i])/double(balance[n-1]));
                if(a==trunc(a)&&a>0){
                    ans++;
                }
            }
        }
        cout<<ans<<endl;

	}
}