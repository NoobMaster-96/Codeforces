#include<bits/stdc++.h>
using namespace std;

int main(){
	int q,x;
	cin>>q>>x;
	int MEX = 0;
	map<int,int> m;
	for(int i=0; i<q; i++){
		int n;
		cin>>n;
		m[n%x]++;
		while(m.find(MEX%x) != m.end()){
			m[MEX%x]--;
			MEX++;
			if(m[MEX%x]==0){
                m.erase(MEX%x);
            }
        }
        cout<<MEX<<endl;
	}
}