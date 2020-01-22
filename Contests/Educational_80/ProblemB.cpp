#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long int A,B;
		cin>>A>>B;
		long long int cnt = 0;
		long long int C = B;
		long long int D = 0;
		while(C > 0){
			C /= 10;
			D *= 10;
			D += 9;
			cnt++;
		}
		if(B < D){
			cnt--;
		}
		long long int ans = cnt * A;
		cout<<ans<<endl;
	}
	return 0;
}