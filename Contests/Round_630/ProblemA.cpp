#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		int x,y,x1,y1,x2,y2;
		cin>>x>>y>>x1>>y1>>x2>>y2;
		int h = b-a;
		int v = d-c;
		if(x2-x1 ==0){
			if(a>0 || b>0){
				cout<<"NO"<<endl;
				continue;
			}
		}
		if(y2-y1 ==0){
			if(c>0 || d>0){
				cout<<"NO"<<endl;
				continue;
			}
		}
		if((x+h)>=x1 && (x+h)<=x2 && (y+v)>=y1 && (y+v)<=y2){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
}