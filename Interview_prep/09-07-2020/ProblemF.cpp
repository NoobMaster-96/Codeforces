#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
	int n;
    cin>>n;
    vector<int> a(n),b(n),c;
    multiset<int> ms;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
        ms.insert(b[i]);
    }
    for(int i=0;i<n;i++){
        auto it=ms.lower_bound(n-a[i]);
        if(it!=ms.end()){
            c.push_back((a[i]+*it)%n);
            ms.erase(it);
        }
        else{
            it = ms.begin();
            c.push_back((a[i]+*it)%n);
            ms.erase(it);
        }
    }
    for(int i=0;i<n;i++){
        cout<<c[i]<<" ";
    }
}