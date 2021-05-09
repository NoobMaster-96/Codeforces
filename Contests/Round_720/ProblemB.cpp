#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solution(){
	int n;
	cin>>n;
	vector<int> a(n);
	int minidx = 0;
	for(int i=0;i<n;i+=1){
		cin>>a[i];
		if(a[i]<a[minidx]){
			minidx = i;
		}
	}
	int num = a[minidx];
	if(minidx!=0){
		cout<<n<<endl;
		cout<<1<<" "<<minidx+1<<" "<<num<<" "<<a[0]<<endl;
	}
	else{
		cout<<n-1<<endl;
	}
	for(int i=1;i<n;i+=1){
		cout<<1<<" "<<1+i<<" "<<num<<" "<<num+i<<endl;
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solution();
	}
}