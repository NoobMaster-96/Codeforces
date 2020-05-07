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
		vector<int> a(n);
		set<int> s;
		for(int i=0;i<n;i++){
			cin>>a[i];
			a[i] = a[i]+i;
		}
		bool flag = true;
		for(int i=0;i<n;i++){
			if(s.find((a[i]%n+n)%n) != s.end()){
				flag = false;
				break;
			}
			else{
				s.insert((a[i]%n+n)%n);
			}
		}
		if(flag){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
}