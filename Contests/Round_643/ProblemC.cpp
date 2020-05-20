#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define lli long long int 

int main(){
	int A,B,C,D;
	cin>>A>>B>>C>>D;
	vector<int> x,y,z;
	for(int i=A;i<=B;i++){
		x.push_back(i);
	}
	for(int i=B;i<=C;i++){
		y.push_back(i);
	}
	for(int i=C;i<=D;i++){
		z.push_back(i);
	}
	int len = max(B+C,D)+1;
	vector<int> cnt(len,0);
	int count = 0;
	int idx = 0;
	for(int i=0;i<len;i++){
		while(idx<z.size()){
			if(z[idx]<i){
				idx++;
				count++;
			}
			else{
				break;
			}
		}
		cnt[i] = count;
	}
	lli ans = 0;
	for(int i=0;i<x.size();i++){
		for(int j=0;j<y.size();j++){
			ans += (lli)cnt[x[i]+y[j]];
		}
	}
	cout<<ans<<endl;
	return 0;
}