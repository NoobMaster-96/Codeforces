#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define lli long long int

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	lli n;
	cin>>n;
	vector<lli> a(n);
	for(lli i=0;i<n;i++){
		cin>>a[i];
	}
	if(n==1){
		cout<<a[0]*a[0]<<endl;
		return 0;
	}
	vector<lli> bits(21,0);
	for(lli i=0;i<n;i++){
		for(lli j=0;j<=20;j++){
			if(a[i]&(1<<j)){
				bits[j]++;
			}
		}
	}
	lli ans = 0;
	while(1){
		lli temp = 0;
		for(lli i=0;i<=20;i++){
			if(bits[i]){
				temp = temp|(1<<i);
				bits[i]--;
			}
		}
		if(temp == 0){
			break;
		}
		else{
			ans += (temp*temp);
		}
	}
	cout<<ans<<endl;
}