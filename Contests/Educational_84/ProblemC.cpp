#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m,k;
	cin>>n>>m>>k;
	vector<pair<int,int>> currpos(k);
	for(int i=0;i<k;i++){
		int x,y;
		cin>>x>>y;
		currpos[i] = make_pair(x,y);
	}
	vector<pair<int,int>> destination(k);
	for(int i=0;i<k;i++){
		int x,y;
		cin>>x>>y;
		destination[i] = make_pair(x,y);
	}
	string s ="";
	for(int i=0;i<n-1;i++){
		s += 'D';
	}
	for(int i=0;i<m-1;i++){
		s += 'L';
	}
	bool flag = 0;
	for(int i=0;i<m-1;i++){
		if(flag == 0){
			for(int j=0;j<n-1;j++){
				s += 'U';
			}
			flag = 1;
		}
		else{
			for(int j=0;j<n-1;j++){
				s += 'D';
			}
			flag = 0;
		}
		s += 'R';
	}
	if(flag == 0){
		for(int j=0;j<n-1;j++){
			s += 'U';
		}
	}
	else{
		for(int j=0;j<n-1;j++){
			s += 'D';
		}
	}
	cout<<s.length()<<endl<<s<<endl;
}