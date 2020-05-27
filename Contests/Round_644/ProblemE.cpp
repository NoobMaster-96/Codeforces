#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<string> mat(n);
		for(int i=0;i<n;i++){
			cin>>mat[i];
		}
		bool check = true;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				bool right = false;
				bool down = false;
				if(mat[i][j]=='1'){
					if(i!=n-1){
						down = mat[i+1][j]-'0';
					}
					if(j!=n-1){
						right = mat[i][j+1]-'0';
					}
					if(down==false && right==false && i!=n-1 && j!=n-1){
						check = false;
						break;
					}
				}
			}
			if(!check){
				break;
			}
		}
		if(check){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
}