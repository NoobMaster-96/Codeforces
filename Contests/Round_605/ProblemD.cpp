#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int max_len=0,idx=0;
	while(max_len < n-idx){
		int len=1,flag=0;
		for(int i=idx;i<n-1;i++){
			if(a[i]<a[i+1]){
				len++;
			}
			else if(a[i]>a[i+1] && a[i-1]<a[i+1] && flag==0 && i>0){
				//len++;
				flag++;
			}
			else{
				break;
			}
		}
		if(len>max_len){
			max_len=len;
		}
		idx++;
	}
	cout<<max_len<<endl;
	return 0;
}