#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int X(int i, int j){
	cout<<"XOR "<<i<<" "<<j<<endl;
	int a;
	cin>>a;
	return a;
}

int A(int i, int j){
	cout<<"AND "<<i<<" "<<j<<endl;
	int a;
	cin>>a;
	return a;
}

int O(int i, int j){
	cout<<"OR "<<i<<" "<<j<<endl;
	int a;
	cin>>a;
	return a;
}

int sum(int A, int X){
	return X+2*A;
}

int main(){
	int n;
	cin>>n;
	vector<int> ans(n);
	int a1 = A(1,2);
	int a2 = A(2,3);
	int a3 = A(3,1);
	int x1 = X(1,2);
	int x2 = X(2,3);
	int x3 = x1^x2;
	int s1 = sum(a1,x1);
	int s2 = sum(a2,x2);
	int s3 = sum(a3,x3);
	int ts = s1+s2+s3;
	ans[2] = (ts-2*s1)/2;
	ans[1] = (ts-2*s3)/2;
	ans[0] = (ts-2*s2)/2;
	for(int i=3;i<n;i++){
		int x = X(i,i+1);
		ans[i] = x^ans[i-1];
	}
	cout<<"! ";
	for(int i=0;i<n;i++){
		cout<<ans[i]<<" ";
	}
}