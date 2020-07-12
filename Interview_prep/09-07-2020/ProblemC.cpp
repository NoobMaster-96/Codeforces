#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define lli long long int
 
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
        int cnt = 0;
        unordered_map<int,int> m;
        m[a[0]]++;
        for(int i=1;i<n;i++){
            int el = 2*a[i];
            for(int j=i+1;j<n;j++){
                if(m[el-a[j]]){
                    cnt += m[el-a[j]];
                }
            }
            m[a[i]]++;
        }
        cout<<cnt<<endl;
    }
}