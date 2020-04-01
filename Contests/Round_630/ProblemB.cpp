#include<bits/stdc++.h>
using namespace std;

const int N = 3e5+7;
bool Prime[1007];
int dp[1007];

int gcd(int a, int b){ 
    if(a == b){
    	return a; 
    }    
    if(a > b){
        return gcd(a-b, b); 
    }
    return gcd(a, b-a); 
} 

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> A(n);
		map<int,bool> m;
		for(int i=0;i<n;i++){
			cin>>A[i];
			m[A[i]] = 1;
		}
		memset(dp,-1,sizeof(dp));
		memset(Prime,1,sizeof(Prime));
		Prime[0] = 0;
		Prime[1] = 0;
		int count = 1;
		for(int i=2;i<1007;i++){
			bool flag = 0;
            if(m[i] && dp[i]==-1){
                dp[i] = count;
                flag = 1;
            }
            if(Prime[i]){
                for(int j=i*2;j<1007;j+=i){
                    Prime[j] = 0;
                    if(m[j] && dp[j]==-1){
                        dp[j] = count;
                        flag = 1;
                    }
                }
            }
            if(flag){
            	count+=1;
            } 
		}
		cout<<count-1<<endl;
		for(int i=0;i<n;i++){
			cout<<dp[A[i]]<<" ";
		}
		cout<<endl;
	}
}