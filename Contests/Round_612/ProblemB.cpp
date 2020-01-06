#include<bits/stdc++.h>
using namespace std;

string solve(string a, string b, int k){
	string str;
	for(int i=0; i<k; i++){
		if(a[i] == b[i]){
			str += a[i];
		}
		else{
			if(a[i]!='S' && b[i]!='S'){
				str += 'S';
			}
			else if(a[i]!='E' && b[i]!='E'){
				str += 'E';
			}
			else if(a[i]!='T' && b[i]!='T'){
				str += 'T';
			}
		}
	}
	return str;
}

int main(){
	int n,k;
	cin>>n>>k;
	vector<string> cards(n);
	for(int i=0; i<n; i++){
		cin>>cards[i];
	}
	set<string> s;
	for(auto x:cards){
		s.insert(x);
	}
	int ans = 0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			string temp = solve(cards[i],cards[j],k);
			if(s.find(temp)!=s.end()){
				ans++;
			}
		}
	}
	
	cout<<ans/3;
}