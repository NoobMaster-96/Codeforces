#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string str;
		cin>>str;
		int ans = 0;
		for(int i=0; i<n-1; i++){
			if(str[i] == 'A' && str[i+1] != 'A'){
				int temp = 0;
				int j = i+1;
				for(int j=i+1; j<n; j++){
					if(str[j] != 'P'){
						break;
					}
					temp++;
				}
				i = j;
				ans = max(ans,temp);
			}
		}
		cout<<ans<<endl;
	}
}