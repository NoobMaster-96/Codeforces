#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int match(string s1,string s2){
    int cnt = 0;
    int m = s1.size();
        for(int k=0;k<m;k++){
            if(s1[k]!=s2[k]) cnt++;
        }
    return cnt;
}

void solve(){
    int n,m;
    cin>>n>>m;
    string s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    if(m==1){
        cout<<"z"<<endl;
        return;
    }
    bool flag = 1;
    vector<pair<string,string> > a;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            string s1 = s[i];
            string s2 = s[j];
            int cnt = 0;
            for(int k=0;k<m;k++){
                if(s1[k]!=s2[k]) cnt++;
            }
            if(cnt>2){
                cout<<-1<<endl;
                return;
            }
            if(cnt==2){
                flag = 0;
                a.push_back(make_pair(s1,s2));
            }
        }
    }
    if(flag){
        cout<<s[0]<<endl;
        return;
    }else{
        flag = 0;
            for(int i=0;i<a.size();i++){
                string temp1="";
                string temp2="";
                string s1 = a[i].first;
                string s2 = a[i].second;
                int cn = 0;
                for(int j=0;j<m;j++){
                    if(s1[j]!=s2[j]){
                        if(cn==1){
                            temp1 += s2[j];
                            temp2 += s1[j];
                        }else{
                            temp1 += s1[j];
                            temp2 += s2[j];
                            cn++;
                        }
                    }else{
                        temp1 += s1[j];
                        temp2 += s2[j];
                    }
                }
                int state = 1;
                for(int j=0;j<n;j++){
                    string curr = s[j];
                    int cnt = match(s[j],temp1);
                    if(cnt>1){
                        state = 0;
                        break;
                    }
                }
                if(state == 1){
                    cout<<temp1<<endl;
                    return;
                }
                state = 1;
                for(int j=0;j<n;j++){
                    string curr = s[j];
                    int cnt = match(s[j],temp2);
                    if(cnt>1){
                        state = 0;
                        break;
                    }
                }
                if(state == 1){
                    cout<<temp2<<endl;
                    return;
                }

            }
            cout<<-1<<endl;
            return;
}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}