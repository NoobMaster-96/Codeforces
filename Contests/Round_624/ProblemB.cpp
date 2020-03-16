#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int m,n;
		cin>>m>>n;
		vector<int> a(m),p(n);
		for(int i=0;i<m;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			cin>>p[i];
		}
		vector<int> b = a;
		sort(b.begin(),b.end());
		if(a==b){
			cout<<"YES"<<endl;
			continue;
		}
		sort(p.begin(),p.end());
		map<int,bool> m1;
        for(int i=0;i<n;i++){
        	m1[p[i]-1] = 1;
        }
        int i, j;  
        bool flag = 1;
        for (i = 0; i < m-1; i++){     
            for(j = 0; j < m-i-1; j++){
                if(a[j] > a[j+1]){
                    if(m1[j]){
                    	swap(a[j], a[j+1]);
                	}
                	else{
                    	flag = 0;
                    	break;
               		}
            	}
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
	}
}