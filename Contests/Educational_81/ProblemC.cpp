#include<bits/stdc++.h>
using namespace std;

int main(){
	int q=1;
    cin >> q;
    while (q--){
        string s,t;
        cin>>s>>t;
        int ans = 0;
        map<char,vector<int>> m;
        for(int i=0;i<s.size();i++){
            m[s[i]].push_back(i);
        }   	
        bool flag = 1;
        for(int i=0;i<t.size();i++){
            if(!m.count(t[i])){
                flag = 0;
                break;
            }
        }
        if(!flag){
            cout<<-1<<endl;
            continue;
        }
        int check = 0;
        for(int i=0;i<t.size();i++){
            auto pos = lower_bound(m[t[i]].begin(),m[t[i]].end(),check);
            if(pos==m[t[i]].end()){
                ans++;
                check = 0;
                pos = lower_bound(m[t[i]].begin(),m[t[i]].end(),check);
                check = *pos;
                check++;
            }else{
                check = *pos;
                check++;
            }
        }
        if(check!=0){
            ans += 1;
        }
        cout<<ans<<endl;

    }
}