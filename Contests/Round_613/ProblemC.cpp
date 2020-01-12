#include<bits/stdc++.h>
using namespace std;

map<long long int,long long int> m;
vector<long long int> ans;
void factorize(long long int n) { 
    long long int count = 0; 
    while (!(n % 2)) { 
        n >>= 1; // equivalent to n=n/2; 
        count++; 
    } 
    if (count) {
       
        m[2] = count;
        
    }
    for (long long int i = 3; i <= sqrt(n); i += 2) { 
        count = 0; 
        while (n % i == 0) { 
            count++; 
            n = n / i; 
        } 
        if (count) {
            m[i] = count;;
          
        }
    }  
    if (n > 2) {
        m[n] = 1;
    }
}


int main(){

	long long int X;
	cin>>X;
	factorize(X);
    for(auto x:m){
        ans.push_back((int)(pow(x.first,x.second)));
    }
    sort(ans.begin(),ans.end());
    if(ans.size()==1){
    	cout<<1<<" "<<ans[0]<<endl;
    	return 0;
    }
    else{
    	long long int a = 1, b = 1;
    	a *= ans[0];
    	int len = ans.size();
    	b*= ans[len-1];
    	int i=1,j=len-2;
    	while(i<=j)
    }
	return 0;
}