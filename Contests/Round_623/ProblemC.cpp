#include<bits/stdc++.h>
using namespace std;

int main(){
    int t=1;
    cin >> t;
    while (t--){
        int n;
        cin>>n;
        vector<int> b(n);
        bool check = 1;
        map<int,bool> m;
        for(int i=0;i<n;i++){
            cin>>b[i];
            if(b[i]>=2*n){
            	check = 0;
            }
            m[b[i]] = 1;
        }
        if(!check){
            cout<<-1<<endl;
            continue;
        }
        vector<int> a(2*n,0);
        for(int i=0;i<n;i++){
            int val = -1;
            for(int j=1;j<2*n+1;j++){
                if(!m[j] && j>b[i]){
                    val = j;
                    m[j] = 1;
                    break;
                }
            }
            if(val==-1){
                check = 0;
                break;
            }
            a[2*i] = b[i];
            a[2*i+1] = val;
        }
        if(!check){
            cout<<-1<<endl;
        }
        else{
            for(int i=0;i<2*n;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
    }
}