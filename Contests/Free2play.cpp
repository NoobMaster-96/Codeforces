#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0);
  	cout.tie(0);
  	int q;
  	cin>>q;
  	for(int i=0;i<q;i++){
  		long int h,n;
  		cin>>h>>n;
  		long long int* levels = new long long int[h+1,0];
  		for(int j=0;j<n;j++){
  			long int temp;
  			cin>>temp;
  			levels[temp]=1;
  		}
  		int crystals=0;
  		int idx=h;
  		while(idx){
	  		if(levels[idx-1]==0)
	  			idx--;
	  		else if(levels[idx-2]==1)
	  			idx-=2;
	  		else{
	  			if(idx!=2)
	  				crystals++;
	  			idx-=2;
	  		}
	  	}
  		cout<<crystals<<"\n";
  	}
}