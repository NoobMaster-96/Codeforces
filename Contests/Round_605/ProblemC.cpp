#include <bits/stdc++.h>
#include<unordered_map>
#include<unordered_set>
using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	string str;
	cin>>str;
	vector<char> missing(k);
	map<char,bool> m;
	for(int i=0;i<k;i++){
		cin>>missing[i];
		m[missing[i]]=true;
	}
	for(int i=0;i<n;i++){
		if(!m[str[i]]){
    		str[i] = '1';
    	}
	}
	long long int ans=0,count=0;
	for(int i=0;i<n;i++){
		if(str[i]=='1'){
    		ans += (count*(count+1))/2;
    		count = 0;
    	}
    	else{
    		count += 1;
    	}
	}
	if(count>0){
    	ans += (count*(count+1))/2;
    }
    cout<<ans<<endl;
    return 0;
}