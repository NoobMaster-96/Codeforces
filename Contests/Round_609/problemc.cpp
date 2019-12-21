#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, k;
	cin>>n>>k;
	string str;
	cin>>str;
	bool flag = true;
	for(int i=0; i<n-k; i++){
		if(str[i] != str[i+k]){
			flag = false;
			break;
		}
	}
	if(flag == true){
		cout<<n<<endl<<str<<endl;
		return 0;
	}
	else{
		string str_;
		for(int i=0; i<k; i++){
			str_ += str[i];
		}
		string ans;
		for(int i = 0; i<n/k ; i++){
			ans += str_;
		}
		for(int i = 0; i<n%k ; i++){
			ans += str_[i];
		}
		if(ans>str){
			cout<<n<<endl<<ans<<endl;
		}
		else{
			int carry = 0;
			if(str_[k-1] == '9'){
				str_[k-1] = 48;
				carry++;
			}
			else{
				str_[k-1]++;
			}
			if(carry == 1){
				for(int i = k-2; i>=0; i--){
					if(str_[i] == '9' && carry == 1){
					str_[i] = 48;
					}
					else{
						str_[i] += carry;
						carry = 0;
					}
				}
			}
			string ans;
			for(int i = 0; i<n/k ; i++){
				ans += str_;
			}
			for(int i = 0; i<n%k ; i++){
				ans += str_[i];
			}
			cout<<n<<endl<<ans<<endl;
		}
	}
	return 0;
}