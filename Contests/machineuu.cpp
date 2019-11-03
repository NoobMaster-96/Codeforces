#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main(){
	string str;
	cin>>str;
	int len = str.length();
	int count=0;
	for(int i=0;i<len-1;i++){
		if(str[i]=='m' || str[i]=='w'){
			count = -1;
			break;
		}
		else if(str[i]=='u' && str[i+1]=='u')
			count++;
		else if(str[i]=='n' && str[i+1]=='n')
			count++;
	}
	long long int a = 1000000007;
	long long int ans;
	if(count==0)
		ans=1;
	else if(count==-1)
		ans=0;
	else
		ans = pow(count,2);
	ans = ans%a;
	cout<<ans;

}