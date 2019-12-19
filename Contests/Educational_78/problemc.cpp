#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> jam(2*n);
		int count1 = 0, count2 = 0;
		for(int i=0;i<2*n;i++){
			cin>>jam[i];
			if(jam[i]==1){
					count1++;
				}
				else{
					count2++;
				}
		}
		if(count2==count1){
			cout<<0<<endl;
			continue;
		}
		else if(count1==2*n || count2==2*n){
			cout<<2*n<<endl;
			continue;
		}
		int k = abs(count1-count2);
		while(k<=2*n){
			int c1 = count1, c2 = count2;
			for(int i=n-k; i<=n; i++){
				if(jam[i]==1){
					c1--;
				}
				else{
					c2--;
				}
			}
			if(c1==c2){
				break;
			}
			else{
				k++;
			}
		}
		cout<<k<<endl;
	}
}