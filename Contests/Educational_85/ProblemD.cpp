#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	lli t;
	cin>>t;
	while(t--){
		lli n,l,r;
		cin>>n>>l>>r;
		lli valpre = 0;
		lli val = 0;
		lli num = 1;
		for(lli i=n-1;i>=1;i--){
			valpre = val;
			val += 2*i;
			if(l<=val){
				break;
			}
			num++;
		}
		vector<lli> ans;
		lli limit = r-l+1;
		lli count = 0;
		lli diff = l-valpre;
		lli j = num + (diff+1)/2;
		if(diff%2==0){
			ans.push_back(j);
			count++;
			j++;
		}
		for(;j<=n;j++){
			if(count == limit){
				break;
			}
			ans.push_back(num);
			count++;
			if(count == limit){
				break;
			}
			ans.push_back(j);
			count++;
		}
		for(lli i = num+1;i<n;i++){
			for(j=i+1;j<=n;j++){
				if(count == limit){
					break;
				}
				ans.push_back(i);
				count++;
				if(count == limit){
					break;
				}
				ans.push_back(j);
				count++;
			}
		}
		if(count<limit){
			ans.push_back(1);
		}
		for(lli i=0;i<ans.size();i++){
			cout<<ans[i]<<" ";
		}
		cout<<endl;
	}
}