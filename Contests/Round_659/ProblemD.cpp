#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int solve(string s,char ch){
    int n = s.length();
    if(n==1){
        if(s[0]==ch){
            return 0;
        }
        else{
            return 1;
        }
    }
    string temp = "";
    for(int i=0;i<n/2;i++){
        temp += ch;
    }
    string s1 = s.substr(0,n/2);
    string s2 = s.substr(n/2,n/2);
    int l = 0,r=0;
    for(int i=0;i<n/2;i++){
        if(s1[i]!=temp[i]){
            l++;
        }
        if(s2[i]!=temp[i]){
            r++;
        }
    }
    return min(l+solve(s2,ch+1),r+solve(s1,ch+1));
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
        cin>>n;
        string s;
        cin>>s;
        cout<<solve(s,'a')<<endl;;
	}
}