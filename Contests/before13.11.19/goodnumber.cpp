#include <bits/stdc++.h>
using namespace std;


bool Good(long long int n){
	while(n>1){
		if(n%3==2){
			return 0;
		}
		n=n/3;
	}
	return 1;
}
int main(){
	
    int q;
    cin >> q;
    while (q--){
    	long long int n;
    	cin>>n;
    	if(Good(n)){
    		cout<<n<<endl;
    	}
    	else{
    		long long int a = (floor(log10(n)/log10(3)));
    		a += 1;
    		long long int num = (long long int)pow(3,a);

    		long long int val = 0;
    		for(int j=n;j<=num;j++){
    			if(Good(j)){
    				val = j;
    				break;
    			}
    		}
    		cout<<val<<endl;
    	}
    }
}