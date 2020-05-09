#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define lli long long int

int main(){
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		int x = 0, y = 0;
		set<pair<int,int>> s;
		s.insert(make_pair(x,y));
		int len = str.length();
		int ans = 0;
		for(int i=0;i<len;i++){
			if(str[i]=='N'){
				y++;
			}
			else if(str[i]=='S'){
				y--;
			}
			else if(str[i]=='E'){
				x++;
			}
			else if(str[i]=='W'){
				x--;
			}
			if(s.find(make_pair(x,y))==s.end()){
				s.insert(make_pair(x,y));
				ans += 5;
			}
			else{
				ans += 1;
			}
		}
		cout<<ans<<endl;
	}
}