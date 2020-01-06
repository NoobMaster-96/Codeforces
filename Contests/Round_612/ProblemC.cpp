#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int even = n/2, odd = n/2;
	if(n%2==1){
		odd++;
	}
	int ans = 0;
	vector<int> no(n);
	for(int i=0; i<n; i++){
		cin>>no[i];
		if((no[i]&1) == 1){
			odd--;
		}
		else if(no[i] != 0){
			even--;
		}
		if(i!=0){
			if(no[i]%2 == 1 && no[i-1]!=0 && no[i-1]%2 == 0){
				ans++;
				cout<<no[i];
			}
			else if(no[i]%2 == 0 && no[i]!=0 && no[i-1]!=0 && no[i-1]%2 == 1){
				ans++;
			}
		}
	}
	
	cout<<ans;
}