#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		string s;
		cin>>s;
		string str = s;
		int len = s.length();
		vector<int> A(len,0);
		for(int i=0,j=len-1;i<j;i++,j--){
			if(s[i]==s[j]){
				A[i] = 1;
				A[j] = 1;
			}
		}
		int fold = n/k;
		for(int i=0;i<k;i++){
			if(str[i]!=str[k+i]){
				if(A[k+i]==1){
					str[i] = str[k+i];
				}
				else{
					str[k+i] = str[i];
				}
			}
		}
		for(int i=0;i<k/2;i++){
			if(A[k-i-1]==1){
				str[i] = str[k-i-1];
			}
			else{
				str[k-i-1] = str[i];
			}
		}
		for(int i=0;i<n/2;i++){
			str[n-i-1] = str[i];
		}
		int ans = 0;
		for(int i=0;i<n;i++){
			if(s[i]!=str[i]){
				ans++;
			}
		}
		cout<<ans<<endl;
		cout<<s<<endl<<str<<endl;
	}
}