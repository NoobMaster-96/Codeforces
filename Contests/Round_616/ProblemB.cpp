#include<bits/stdc++.h>
using namespace std;

int in(vector<int> &a,int n){
    int num = 0;
    for(int i=n-1;i>=0;i--,num++){
        if(a[i]<num)
            return 0;
    }
    return 1;
}

int of(vector<int> &a,int n){
    int num = 0;
    for(int i=0;i<n;i++,num++){
        if(a[i]<num)
            return 0;
    }
    return 1;
}

int out(vector<int> &a,int n){
    int num = 0,i = 0;
    for(;i<n;i++,num++){
        if(a[i]<num)
            break;
    }
    i--;
    int num2 = 0;
    int j = 0;
    for(j=n-1;j>=i;j--,num2++){
        if(a[j]<num2)
            return 0;
    }
    return 1;
}

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
		if(n==1){
			cout<<"Yes"<<endl;
			continue;
		}
		if(in(a,n) || of(a,n) || out(a,n)){
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}
	}
}