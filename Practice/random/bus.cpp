#include <bits/stdc++.h> 
using namespace std; 

int main(){
	int n;
	cin>>n;
	int* bus = new int[n];
	for(int i=0;i<n;i++){
		cin>>bus[i];
	}
	for(int i=1;i<=n/2;i++){
		int temp=bus[i-1];
		for(int j=i;j<=n;j+=i){
			if(i!=j){
				bus[j-1]=bus[j-1]-temp;
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<bus[i];
	}
}