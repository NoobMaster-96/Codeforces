#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a,b;
        cin>>a>>b;
        bool flag = true;
        for(int i=0;i<n;i++){
            if(b[i]<a[i] || b[i]>'t'){
                flag = false;
                break;
            }
        }
        if(!flag){
            cout<<-1<<endl;
            continue;
        }
        int ans = 0;
        for(int i ='a';i<='t';i++){
            int j = 0;
            while(j<n){
                if(b[j]==i && a[j]!=i){
                    int k = j;
                    char ch = a[j];
                    while(k<n && a[k]==ch && b[k]>=i){
                        a[k] = i;
                        k++;
                    }
                    j = k;
                    ans++;
                }
                else{
                    j++;
                }
            }
            
        }
        cout<<ans<<endl;
    }
}