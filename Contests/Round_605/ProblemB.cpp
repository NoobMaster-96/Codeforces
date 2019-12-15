#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		string str;
		cin>>str;
		int len = str.length();
		int R=0,L=0,U=0,D=0;
		for(int j=0;j<len;j++){
			if(str[j]=='U'){
				U++;
			}
			else if(str[j]=='D'){
				D++;
			}
			else if(str[j]=='R'){
				R++;
			}
			else if(str[j]=='L'){
				L++;
			}
		}
		if(R<L){
			L=R;
		}
		else{
			R=L;
		}
		if(U<D){
			D=U;
		}
		else{
			U=D;
		}
		if(L==0 && U!=0){
			U=1;
			D=1;
		}
		if(U==0 && L!=0){
			R=1;
			L=1;
		}
		string ans;
		int n = R+L+U+D;
		for(int j=0;j<R;j++){
			ans += "R";
		}
		for(int j=0;j<U;j++){
			ans += "U";
		}
		for(int j=0;j<L;j++){
			ans += "L";
		}
		for(int j=0;j<D;j++){
			ans += "D";
		}
		cout<<n<<endl<<ans<<endl;
	}
	return 0;
}