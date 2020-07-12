#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define lli long long int

int grid[300][300];
int n,m;

bool isValid(int i,int j){
    if(i>=0 && i<n && j>=0 && j<m){
        return true;
    }
    return false;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>m;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>grid[i][j];
            }
        }
        int g[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int k = 0;
                if(isValid(i,j-1)){
                    k++;
                }
                if(isValid(i,j+1)){
                    k++;
                }
                if(isValid(i-1,j)){
                    k++;
                }
                if(isValid(i+1,j)){
                    k++;
                }
                g[i][j] = k;
            }
        }
        bool flag = true;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]>g[i][j]){
                    flag = false;
                }
                if(!flag){
                    break;
                }
            }
            if(!flag){
                break;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    cout<<g[i][j]<<" ";
                }
                cout<<endl;
            }
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}