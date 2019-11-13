#include<bits/stdc++.h>
using namespace std;

bool sortbysec(const pair<int,int> &a, 
              const pair<int,int> &b) 
{ 
    return (a.second < b.second); 
} 
int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n,m;
		cin>>n;
		vector<long long int> a(n,0);
		for(int j=0;j<n;j++){
			cin>>a[j];
		}
		cin>>m;
		vector<pair<int,long long int>> hero;
		for(int j=0;j<m;j++){
			long long int p;
			int s;
			cin>>p>>s;
			hero.push_back(make_pair(s,p));
		}
		sort(hero.begin(),hero.end());
		vector<long long int> tempa = a;
		sort(tempa.begin(),tempa.end());
		vector<pair<int,long long int>> temphero;
		sort(temphero.begin(),temphero.end(), sortbysec);
		for(int k=0;k<m;k++){
			cout<<hero[k].first<<" "<<hero[k].second<<endl;
		}
		if(tempa[n-1]>temphero[m-1].second){
			cout<<"-1"<<endl;
			continue;
		}
		int day=0;
		while(1){
			int idx = 0;
			int maxkill = 0;
			for(int j=0;j<m;j++){
				if(hero[j].first>maxkill){
					int kill=0;
					for(int k=idx;k<n;k++){
						if(hero[j].second>=a[k]){
							kill++;
						}
						else{
							break;
						}
					}
					if(kill>maxkill){
						maxkill=kill;
					}
				}
				else{
					break;
				}
			}
			idx += maxkill;
			day++;
			if(idx==n-1){
				break;
			}
		}
		cout<<day<<endl;
	}
	return 0;
}