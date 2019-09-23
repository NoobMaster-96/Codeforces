#include<bits/stdc++.h>

using namespace std;

void sol(string str, int n){
	int flag=0,count=0;
	for(int i=0;i<n;i++){
		if(str[i]=='a'){
			flag++;
		}
		else{
			flag--;
		}

		if((i+1)%2==0){
			if(flag!=0){
				if(str[i]=='a'){
					str[i]='b';
				}
				else{
					str[i]='a';
				}
				count++;
				flag=0;
			}
		}
	}
	cout<<count<< endl<<str;
}

int main(){
	int n;
	string str;
	cin>>n>>str;
	sol(str,n);
	return 0;
}