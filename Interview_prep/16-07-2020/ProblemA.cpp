#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
    int t;
    t = 1;
    while(t--){
        set<int> s;
        for(int i=0;i<10;i++){
            int temp;
            cin>>temp;
            s.insert(temp);
        }
        int n;
        cin>>n;
        int a[n][6];
        for(int i=0;i<n;i++){
            for(int j=0;j<6;j++){
                cin>>a[i][j];
            }
        }
        for(int i=0;i<n;i++){
            int cnt = 0;
            for(int j=0;j<6;j++){
                if(s.find(a[i][j])!=s.end()){
                    cnt++;
                }
            }
            if(cnt>=3){
                cout<<"Lucky"<<endl;
            }
            else{
                cout<<"Unlucky"<<endl;
            }
        }
    }
}