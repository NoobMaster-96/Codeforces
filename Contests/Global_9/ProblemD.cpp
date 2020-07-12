#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int mex(vector<int> a){
    int n = a.size();
    int arr[1005]={0};
    for(int i=0;i<n;i++){
        arr[a[i]] = 1;
    }
    for(int i=0;i<n;i++){
        if(!arr[i]) return i;
    }
    return n;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        set<int> s;
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(a[i]!=i){
                s.insert(i);
            }
        }
        while(true){
            vector<int> b = a;
            sort(b.begin(),b.end());
            if(b==a){
                break;
            }
            for(int i=0;i<n;i++){
                if(a[i]==i){
                    continue;
                }
                else{
                    int idx = mex(a);
                    if(idx<=n-1){
                        if(s.find(idx)!=s.end()){
                            s.erase(idx);
                        }
                        if(a[idx]==idx){
                            continue;
                        }
                        a[idx] = idx;
                        ans.push_back(idx);
                    }
                    else{
                        a[*(s.rbegin())] = idx;
                        ans.push_back(*(s.rbegin()));
                    }
                }
            }
        }
        cout<<ans.size()<<endl;
        for(int i=0;i<ans.size();i++){
            cout<<(ans[i]+1)<<" ";
        }
        cout<<endl;
	}
}