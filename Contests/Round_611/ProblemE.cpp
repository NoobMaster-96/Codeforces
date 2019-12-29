#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> location(n+1);
	vector<int> partymin(n+2,0);
	vector<int> partymax(n+2,0);
	int ansmax = 0;
	int ansmin = 0;
	for(int i=1; i<=n; i++){
		cin>>location[i];
		partymax[location[i]]++;
		partymin[location[i]]++;
	}

	/*for(int i=0; i<=n+1; i++){
		cout<<partymin[i]<<" "<<partymax[i]<<endl;
	}*/

	for(int i=1; i<=n; i++){
		if(partymin[i-1] !=0 ){
			party
		}
	}
}