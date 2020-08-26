#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int mini;
int gcd(int a,int b){
    if(b==0) return a;
    if(a<b) return gcd(b,a);
    return gcd(b,a%b);
}
bool comp(int a,int b){
	return gcd(a,b)==mini?false:true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        mini = INT_MAX;
        for(int i=0;i<n;i++){
        	cin>>a[i];
        	mini = min(mini,a[i]);
        }
        vector<int> b = a;
        sort(b.begin(),b.end());
        if(a==b){
        	cout<<"YES"<<endl;
        	continue;
        }
        int x = a[0];
        for(int i=0;i<n;i++){
        	if(a[i]==b[i]){
        		continue;
        	}
        	x = gcd(x,a[i]);
        }
        if(x!=0 && x%mini==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}