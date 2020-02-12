#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s;
		cin>>s;
		int arr[n+1][2];
		int x=0;
		int y=0;
		arr[0][0] = x;
		arr[0][0] = y;
		int r=-1,l=-1,mini=INT_MAX;
		map<pair<int,int>,int> m;
		m[make_pair(0,0)] = 0;
		for(int i=1;i<=n;i++){
			if(s[i-1]=='L'){
				x -= 1;
			}
			else if(s[i-1]=='R'){
				x += 1;
			}
			else if(s[i-1]=='D'){
				y -= 1;
			}
			else if(s[i-1]=='U'){
				y += 1;
			}
			arr[i][0] = y;
			arr[i][1] = x;
			if (m.count(make_pair(arr[i][0], arr[i][1]))){
                auto j = m[make_pair(arr[i][0], arr[i][1])];
                if (i - j < mini){
                    mini = i - j - 1;
                    r = j + 1;
                    l = i;
                }
            }
            m[make_pair(arr[i][0], arr[i][1])] = i;
		}
		
        if (r == -1)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << r << " " << l << endl;
        }
	}
}