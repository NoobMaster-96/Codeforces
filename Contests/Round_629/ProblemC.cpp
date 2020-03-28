#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
        string s;
        cin>>n>>s;
        if(n==1){
            cout<<1<<endl<<1<<endl;
            continue;
        }
        string a,b;
        a += '1';
        b += '1';
        bool flag = 0;
        char prev = '2';
        for(int i=1; i<n;i++){
            if(s[i]=='1'){
                if(flag){
                    a += '1';
                    b += '0';
                }else{
                    a += '0';
                    b += '1';
                    flag = 1;
                }
            }else if(s[i]=='0'){
                a += '0';
                b += '0';
            }else{
                if(flag){
                    a += '2';
                    b += '0';
                }else{
                    a += '1';
                    b += '1';
                }
            }
        }
        cout<<a<<endl<<b<<endl;
	}
}