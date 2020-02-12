#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long int n;
		cin>>n;
		if(n<10){
			cout<<n<<endl;
			continue;
		}
		long long int ans = 0;
		long long int temp = n;
		while(temp>=10){
			ans += (temp/10)*10;
			temp = (temp/10)+(temp%10);
		}
		ans += temp;
		cout<<ans<<endl;
	}
}