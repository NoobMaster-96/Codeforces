#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	while(n--){
		string str;
		cin>>str;
		int len = str.length();
		int count0 = 0;
		int sum = 0;
		int even = 0;
		for(int i=0;i<len;i++){
			if(str[i]=='0'){
				count0++;
			}
			if(str[i]!='0' && str[i]%2==0){
				even = 1;
			}
			sum += str[i] - 48;
		}
		if(count0+even >=2 && sum%3 == 0){
			cout<<"red"<<endl;
		}
		else if(count0 == len){
			cout<<"red"<<endl;
		}
		else{
			cout<<"cyan"<<endl;
		}
	}
	return 0;
}