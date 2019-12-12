#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	int n = a+b+c+d;
	vector<int> ans(n);
	if(a>b || d>c){
		cout<<"NO";
	}
	else if(c-d>b-a+1){
		cout<<"NO";
	}
	else{
		
		for(int i=0;i<n;i++){
			if(i==0){
				if(b>a){
					ans[i]=1;
					b--;
				}
				else{
					ans[i]=0;
					a--;
				}
			}
			else{
				if(ans[i-1]==0){
					ans[i]=1;
					b--;
				}
				if(ans[i-1]==3){
					ans[i]=2;
					c--;
				}
				if(ans[i-1]==1){
					if(a!=0){
						ans[i]=0;
						a--;
					}
					else{
						ans[i]=2;
						c--;
					}
				}
				if(ans[i-1]==2){
					if(d!=0){
						ans[i]=3;
						d--;
					}
					else{
						ans[i]=1;
						b--;
					}
				}
			}
		}
		cout<<"YES"<<endl;
		for(int j=0;j<n;j++){
			cout<<ans[j]<<" ";
		}
	}

}