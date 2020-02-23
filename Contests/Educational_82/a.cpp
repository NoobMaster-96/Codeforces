#include<bits/stdc++.h>
using namespace std;
set<int> adjlist[26];
int main(){
	int t=1;
    cin >> t;
    while (t--){
    	for(int i=0;i<26;i++){
            adjlist[i].clear();
        }
        string s;
        cin>>s;
        int n = s.size();
        if(n==1){
            string ans = "";
            ans += s[0];
            for(int i=0;i<26;i++){
                if((i+'a')==s[0]){
                    continue;
                }else{
                    char c = i+'a';
                    ans+= c;
                }
            }
            cout<<"YES"<<endl<<ans<<endl;
            continue;
        }
        for(int i=0;i<n-1;i++){
            adjlist[s[i]-'a'].insert(s[i+1]-'a');
            adjlist[s[i+1]-'a'].insert(s[i]-'a');
        }
        int cnt = 0;
        vector<int> ans;
        bool flag = 1;
        set<int> adjlist2;
        for(int i=0;i<n;i++){
            adjlist2.insert(s[i]);
        }
        for(int i =0;i<26;i++){
            if(adjlist[i].size()==1){
                ans.push_back(i);
                cnt++;
            }
            if(adjlist[i].size()>2){
                flag = 0;
            }
        }
        int req = adjlist2.size();
        if(cnt==2 && flag){
            cout<<"YES"<<endl;
            map<char,bool> m;
            char st = ans[0]+'a';
            char en = ans[1]+'a';
            m[st] = 1;
            m[en] = 1;
            string ans = "";
            ans += st;
            int temp = req-2;
            while(temp--){
                ans += ' ';
            }
            ans += en;
            req -= 2;
            int i = 1;
            int j = i+req;
            char prev = st; 
            while(i<j){
                for(auto x:adjlist[prev-'a']){
                    if(m[x+'a']){
                        continue;
                    }else{
                        char curr = 'a'+x;
                        ans[i] = curr;
                        m[curr] = 1;
                        prev = curr;
                        i++;
                    }
                }
            }
            for(int i=0;i<26;i++){
                if(adjlist2.find(i+'a')==adjlist2.end()){
                    char c = i+'a';
                    ans += c;
                }
            }
            cout<<ans<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}