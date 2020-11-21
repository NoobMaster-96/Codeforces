#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define lli long long int

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string a,b;
        cin>>a>>b;
        vector<int> freq(26,0);
        for(int i=0;i<n;i++){
            freq[a[i]-'a']++;
            freq[b[i]-'a']--;
        }
        bool flag = true;
        int res = 0;
        for(int i=0;i<26;i++){
            if(freq[i]>0){
                if(freq[i]%k!=0){
                    flag = false;
                    break;
                }
                res += freq[i]/k;
            }
            else if(freq[i]<0){
                if(abs(freq[i])%k!=0){
                    flag = false;
                    break;
                }
                res += freq[i]/k;
            }
            if(res<0){
                flag = false;
                break;
            }
        }
        if(flag){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}

