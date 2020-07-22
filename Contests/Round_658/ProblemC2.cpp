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
        vector<int> ans;
        if(a==b){
            cout<<0<<endl;
            continue;
        }
        int l = 0,r = n-1,cnt = 0,i=n;
        while(i>0){
            char e  = ((a[r] -'0' + (cnt%2))%2)+'0';
            char s = ((a[l]-'0' +(cnt%2))%2) + '0';
            if(e==b[i-1]){
                if(r>l){
                    r--;
                    i--;
                }
                else{
                    r++;
                    i--;
                }
            }
            else if(s!=b[i-1]){
                cnt++;
                int temp = r;
                if(l>r){
                    r = l-1;
                }
                else{
                    r = l+1;
                }

                l= temp;
                ans.push_back(i);
                i--;
            }
            else if(s==b[i-1]){
                ans.push_back(1);
                cnt++;
                int temp = r;
                if(l>r){
                    r = l-1;
                }
                else{
                    r = l+1;
                }
                l = temp;
                ans.push_back(i);
                i--;
            }
        }
        cout<<ans.size()<<" ";
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}