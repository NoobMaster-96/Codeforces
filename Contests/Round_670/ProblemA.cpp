#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
    int t;
    cin>>t;
    while(t--){
    	int n;
    	cin>>n;
    	vector<int> a(n);
    	for(int i=0;i<n;i+=1){
            cin>>a[i];
        }
        if(n==2){
            if(a[0]==a[1]){
                cout<<2<<endl;
                cout<<a[0]<<" "<<a[1];
                cout<<endl;
            }
            else{
                cout<<1<<endl;
                cout<<0<<endl;
            }
            continue;
        }
        vector<int> ans;
        vector<bool> visited(n+1,0);
        for(int i=1;i<n;i+=1){
            if(a[i]==a[i-1]&&!visited[i-1]){
                ans.push_back(a[i]);
                ans.push_back(a[i-1]);
                visited[i] = 1;
                visited[i-1] = 1;
            }
            else{
                int j = i-1;
                while(j>=0)
                {
                    if(visited[j]){
                        break;
                    }
                    if(a[i]==a[j]&&!visited[j]){
                        ans.push_back(a[i]);
                        ans.push_back(a[j]);
                        visited[i] = 1;
                        visited[j] = 1;
                        break;
                    }
                    j--;
                }
            }
        }
        cout<<ans.size()<<endl;
        for(int i=0;i<ans.size();i+=1){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}