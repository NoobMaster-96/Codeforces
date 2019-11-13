#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		string str;
		cin>>str;
		vector<char> correct;
		int l = str.length();
		int j=0;
		while(j<l-1){
			if(str[j]==str[j+1]){
				j+=2;
			}
			else{
				//cout<<str[j]<<endl;
				correct.push_back(str[j]);
				j++;
			}
		}
		if(j==l-1){
			//cout<<str[j]<<endl;
			correct.push_back(str[j]);
		}
		sort(correct.begin(),correct.end());
		vector<char>::iterator ip; 
  
   
    	ip = unique(correct.begin(), correct.end()); 
    	correct.resize(distance(correct.begin(), ip)); 
  
    	for (ip = correct.begin(); ip != correct.end(); ++ip) { 
        	cout << *ip; 
    	} 
		cout<<endl;
	}	
}