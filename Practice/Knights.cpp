#include <bits/stdc++.h> 
using namespace std; 

void knights(int n){
	char a[2]={'W','B'};
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<a[(i+j)%2];
		}
		cout<<endl;
	}
}

int main(){
	int n;
	cin>>n;
	knights(n);

	return 0;
}