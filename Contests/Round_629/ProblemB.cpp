#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		 int n,k;
        cin>>n>>k;

        int x= 1;

        int cnt = 0;

        while(x<k){
            cnt++;
            x += (1+cnt);
        }
        x -= (1+cnt);
        x +=1;

        int s2 = k-x;

        int pos1 = n-2-cnt;
        int pos2 = n-1-s2;
        string s = "";

        for(int i=0;i<n;i++){
            s+='a';
        }
        s[pos2] = 'b';
        s[pos1] = 'b';
        cout<<s<<endl;
	}
}