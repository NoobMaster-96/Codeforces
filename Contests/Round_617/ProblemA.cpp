#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> a(n);
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		map<int,int> m;
		for(int i=0;i<n;i++){
			if(a[i]&1){
				m[1]++;
			}
			else{
				m[0]++;
			}
		}
		if(n&1){
			if(m[1]>0){
				cout<<"YES"<<endl;
			}
			else{
				cout<<"NO"<<endl;
			}
		}
		else{
            if(m[0]==0){
                cout<<"NO"<<endl;
            }else if(m[1]==0){
                cout<<"NO"<<endl;
            }else{
                cout<<"YES"<<endl;
            }
        }
	}
}