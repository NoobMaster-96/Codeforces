#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin>>n;
    vector<pair<int,int>> box;
    box.push_back(make_pair(0,0));
    box.push_back(make_pair(1,0));
    box.push_back(make_pair(0,1));
    box.push_back(make_pair(2,0));
    box.push_back(make_pair(0,2));
    box.push_back(make_pair(1,2));
    box.push_back(make_pair(2,1));
    box.push_back(make_pair(2,2));
    for(int i=1;i<=n;i++){
        int x = i*2;
        int y = i*2;
        box.push_back(make_pair(x,y+1));
        box.push_back(make_pair(x,y+2));
        box.push_back(make_pair(x+1,y));
        box.push_back(make_pair(x+2,y));
        box.push_back(make_pair(x+2,y+1));
        box.push_back(make_pair(x+1,y+2));
        box.push_back(make_pair(x+2,y+2));
    }
    int a = box.size();
    cout<<a<<endl;
    for(int i=0;i<a;i++){
        cout<<box[i].first<<" "<<box[i].second<<endl;
    }
}