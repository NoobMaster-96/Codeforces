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
		vector<int> c(n);
		for(int i=0;i<n;i++){
			cin>>c[i];
		}
		int a = 0,b = 0, prev = 0;
		int i=0,j=n-1,ans=0;
		bool turn = true;
		while(i<=j){
			int temp = 0;
			if(turn){
				while(i<=j){
					temp += c[i];
					i++;
					if(temp>prev){
						a += temp;
						prev = temp;
						ans++;
						turn = !turn;
						break;
					}
				}
			}
			else{
				while(j>=i){
					temp += c[j];
					j--;
					if(temp>prev){
						b += temp;
						prev = temp;
						ans++;
						turn = !turn;
						break;
					}
				}
			}
			if(temp<prev){
				if(turn){
					a += temp;
				}
				else{
					b += temp;
				}
				ans++;
			}
		}
		cout<<ans<<" "<<a<<" "<<b<<endl;
	}
}