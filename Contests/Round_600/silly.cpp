#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	long long int a;
	int l=0;
	int k=0;
	set<int> s;
	vector<int> interval;
	for(int i=0;i<n;i++){
		cin>>interval[i];
	}
	int no=1;
	a = interval[0];
	vector<int> b;
	for(int i=1;i<n;i++){
		a+=interval[i];
		no++;
		if(a==0){
			b.push_back(no);
			no=0;
		}
	}
	bool check = 1;
	if(a!=0){
		cout<<-1<<endl;
		exit(0);
	}
	for(int i=0;i<n;i++){
		if(a==0){
			s.clear();
			a+=interval[i];
			s.insert(interval[i]);
		}
		else{
			if(s.find(interval[i])==s.end()){
				s.insert(interval[i]);
				a+=interval[i];
			}
			else{
				check=false;
				break;
			}
		}
	}
	if(!check){
		cout<<-1<<endl;
	}
	else{
		cout<<b.size()<<endl;
		for(int i=0;i<b.size();i++){
			cout<<b[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}