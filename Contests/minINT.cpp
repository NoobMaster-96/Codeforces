#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		int l =str.length();
		int swap=-1;
		while(swap!=0){
			swap=0;
			for(int i=0;i<l-1;i++){
				if(str[i]>str[i+1]){
					if(str[i]%2!=str[i+1]%2){
						char temp = str[i];
						str[i] = str[i+1];
						str[i+1] = temp;
						swap++;
					}
				}
			}
		}
		cout<<str<<endl;
	}
	return 0;
}