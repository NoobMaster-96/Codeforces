#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define lli long long int

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int x;
        cin>>s>>x;
        int n = s.length();
        string w = "";
        for(int i=0;i<n;i++){
            w += '0';
        }
        bool flag = true;
        for(int i = 0; i < x; i++)
        {
            for(int j = i; j < n; j += x)
            {
                if(s[j]=='1')
                {
                    if(j-x>=0)
                        w[j-x] = '1';
                    if(j+x < n)
                        w[j+x] = '1';
                }
            }
            for(int j = i; j < n; j += x)
            {
                if(s[j]=='0')
                {
                    if(j-x>=0)
                        w[j-x] = '0';
                    if(j+x < n)
                        w[j+x] = '0';
                }
            }
            for(int j = i; j < n; j += x){
                bool temp = 0;
                if(s[j]=='1')
                {
                    temp |= j-x>=0 && w[j-x] == '1';
                    temp |= j+x<n && w[j+x] == '1';
                }
                else
                    temp = 1;
                flag &= temp;
            }
            if(!flag){
                break;
            }
        }
        if(flag){
            cout<<w<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}