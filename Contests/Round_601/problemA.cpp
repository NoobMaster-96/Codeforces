#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	for(int i=0; i<t; i++){
		long long int a,b;
		cin>>a>>b;
		long long int dif = a-b;
		long long int ans = 0;
		long long int num = abs(dif);
		ans += (num/5);
		num %= 5;
		ans += (num/2);
		num %= 2;
		ans += (num/1);
		cout<<ans<<endl;
	}
	return 0;
}