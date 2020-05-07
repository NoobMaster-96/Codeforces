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
		int ans = 0;
		while(n>=2){
			int i = 1;
			int temp = 0;
			while(1){
				temp = i*(3*i+1)/2;
				if(temp>n){
					break;
				}
				i++;
			}
			i--;
			temp = i*(3*i+1)/2;
			n -= temp;
			ans++;
		}
		cout<<ans<<endl;
	}
}