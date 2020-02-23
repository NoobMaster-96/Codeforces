#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long int n,g,b;
		cin>>n>>g>>b;
		long long int half = (n+1)/2;
		if(g>=half){
			cout<<n<<endl;
			continue;
		}
		long long int no = half/g;
		long long int val = no*g;
		if(half%g){
			no++;
			val += (half%g);
		}
		if((no-1)*b>=(n/2)){
            val += (no-1)*b;
        }else{
            val = n;
        }
        cout<<val<<endl;
	}
}