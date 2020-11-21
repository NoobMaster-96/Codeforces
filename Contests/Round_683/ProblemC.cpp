#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define lli long long int

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        lli W;
        cin>>n>>W;
        vector<lli> w(n);
        for(int i=0;i<n;i+=1){
            cin>>w[i];
        }
        vector<pair<lli,int>> wi;
        for(int i=0;i<n;i+=1){
            if(w[i]<=W){
                wi.push_back({w[i],i});
            }
        }
        if(wi.size()==0){
            cout<<-1<<endl;
            continue;
        }
        sort(wi.begin(),wi.end(),greater<pair<lli,int>>());
        lli sum = (W+1)/2;
        vector<int> idx;
        //cout<<sum<<endl;
        for(int i=0;i<wi.size();i+=1){
            sum -= wi[i].first;
            idx.push_back(wi[i].second+1);
            if(sum<=0){
                break;
            }
        }
        sort(idx.begin(),idx.end());
        if(sum>0){
            cout<<-1<<endl;
        }
        else{
            cout<<idx.size()<<endl;
            for(int i=0;i<idx.size();i+=1){
                cout<<idx[i]<<" ";
            }
            cout<<endl;
        }
    }
}

