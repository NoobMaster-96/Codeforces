#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<pair<int,int>> cord;
		for(int i=0; i<n; i++){
			int x,y;
			cin>>x>>y;
			pair<int,int> temp = make_pair(x,y);
			cord.push_back(temp);
		}
		sort(cord.begin(),cord.end());
		string ans;
		int currx=0,curry=0;
		bool flag = 1;
		for(int i=0; i<n; i++){
			if(cord[i].first<currx || cord[i].second<curry){
				flag = 0;
				break;
			}
			else{
				string str;
				for(int j=0; j<(cord[i].second-curry); j++){
					str += 'U';
				}
				for(int j=0; j<(cord[i].first-currx); j++){
					str += 'R';
				}
				sort(str.begin(),str.end());
				ans += str;
			}
			currx = cord[i].first;
			curry = cord[i].second;
		}
		if(flag == 1){
			cout<<"YES"<<endl<<ans<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
}