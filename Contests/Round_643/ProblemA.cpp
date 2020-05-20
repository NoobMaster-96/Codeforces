#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define lli long long int

lli solve(lli n){
	set<int> s;
    while(n)
	{
        s.insert(n%10);
        n/=10;
    }
    return (*s.begin())*(*s.rbegin());
}

int main(){
	int t;
	cin>>t;
	while(t--){
		lli a1,k;
		cin>>a1>>k;
		k--;
		bool check = 0;
		while(k--){
			a1 += solve(a1);
			if(solve(a1)==0){
				cout<<a1<<endl;
				check = 1;
				break;
			}
		}
		if(!check){
			cout<<a1<<endl;
		}
	}
	return 0;
}