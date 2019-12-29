#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> gift(n+1);
	map<int,bool> m;
	for(int i=1; i<=n; i++){
		cin>>gift[i],m[gift[i]] = true;
	}
	vector<int> notgiven;

	for(int i=1; i<=n; i++){
		if(gift[i] == 0){
			notgiven.push_back(i);
		}
	}

	vector<int> notgot;
	map<int,bool> m1;
	map<int,bool> m2;

	for(int i=1; i<=n; i++){
		if(!m[i]){
			notgot.push_back(i);
			m1[i] = true;
		}
	}
	
	int n1 = notgiven.size();
	int n2 = notgot.size();
	int i=0,j=n2-1;

	while(i<n1 && j>=0){
		
		if(notgiven[i] == notgot[j]){
			j--;
		}else{
			gift[notgiven[i]] = notgot[j];
			m1[notgot[j]] = false;
			m2[notgiven[i]] = true;
			i++;j--;
		}
	}
	i=0;j=n2-1;
	while(i<n1 && j>=0){
		if(m2[notgiven[i]]){
			i++;
			continue;
		}
		if(!m1[notgot[j]]){
			j--;
			continue;
		}
		gift[notgiven[i]] = notgot[j];
		m1[notgot[j]] = false;
		m2[notgiven[i]] = true;
		i++;j--;

	}
	for(int i=1;i<=n;i++){
		cout<<gift[i]<<" ";
	}
}