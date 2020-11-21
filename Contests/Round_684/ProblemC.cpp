#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define lli long long int

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<string> s(n);
        for(int i=0;i<n;i+=1){
            cin>>s[i];
        }
        vector<vector<int>> a(n,vector<int>(m));
        for(int i=0;i<n;i+=1){
            for(int j=0;j<m;j+=1){
                a[i][j] = s[i][j]-'0';
            }
        }
        vector<vector<int>> ans;
        for(int i=0;i<n-1;i+=2){
            for(int j=0;j<m-1;j+=2){
                if(a[i][j]==1 && a[i][j+1]==1 && a[i+1][j]==1 && a[i+1][j+1]==1){
                    //cout<<a[i][j]<<a[i][j+1]<<endl<<a[i+1][j]<<a[i+1][j+1]<<endl;
                    vector<int> move = {i+1,j+1,i+2,j+1,i+1,j+2};
                    ans.push_back(move);
                    move = {i+2,j+2,i+2,j+1,i+1,j+2};
                    ans.push_back(move);
                    move = {i+2,j+2,i+2,j+1,i+1,j+1};
                    ans.push_back(move);
                    move = {i+1,j+1,i+2,j+2,i+1,j+2};
                    ans.push_back(move);
                    a[i][j] = 0;
                    a[i+1][j] = 0;
                    a[i][j+1] = 0;
                    a[i+1][j+1] = 0;
                }
                else if(a[i][j]==1 && a[i][j+1]==1 && a[i+1][j]==1 && a[i+1][j+1]==0){
                    //cout<<a[i][j]<<a[i][j+1]<<endl<<a[i+1][j]<<a[i+1][j+1]<<endl;
                    vector<int> move = {i+1,j+1,i+2,j+1,i+1,j+2};
                    ans.push_back(move);
                    a[i][j] = 0;
                    a[i+1][j] = 0;
                    a[i][j+1] = 0;
                    a[i+1][j+1] = 0;
                }
                else if(a[i][j]==1 && a[i][j+1]==0 && a[i+1][j]==1 && a[i+1][j+1]==1){
                    //cout<<a[i][j]<<a[i][j+1]<<endl<<a[i+1][j]<<a[i+1][j+1]<<endl;
                    vector<int> move = {i+1,j+1,i+2,j+1,i+2,j+2};
                    ans.push_back(move);
                    a[i][j] = 0;
                    a[i+1][j] = 0;
                    a[i][j+1] = 0;
                    a[i+1][j+1] = 0;
                }
                else if(a[i][j]==1 && a[i][j+1]==1 && a[i+1][j]==0 && a[i+1][j+1]==1){
                    //cout<<a[i][j]<<a[i][j+1]<<endl<<a[i+1][j]<<a[i+1][j+1]<<endl;
                    vector<int> move = {i+1,j+1,i+2,j+2,i+1,j+2};
                    ans.push_back(move);
                    a[i][j] = 0;
                    a[i+1][j] = 0;
                    a[i][j+1] = 0;
                    a[i+1][j+1] = 0;
                }
                else if(a[i][j]==0 && a[i][j+1]==1 && a[i+1][j]==1 && a[i+1][j+1]==1){
                    //cout<<a[i][j]<<a[i][j+1]<<endl<<a[i+1][j]<<a[i+1][j+1]<<endl;
                    vector<int> move = {i+2,j+2,i+2,j+1,i+1,j+2};
                    ans.push_back(move);
                    a[i][j] = 0;
                    a[i+1][j] = 0;
                    a[i][j+1] = 0;
                    a[i+1][j+1] = 0;
                }
                else if(a[i][j]==1 && a[i][j+1]==1 && a[i+1][j]==0 && a[i+1][j+1]==0){
                    //cout<<a[i][j]<<a[i][j+1]<<endl<<a[i+1][j]<<a[i+1][j+1]<<endl;
                    vector<int> move = {i+2,j+2,i+2,j+1,i+1,j+1};
                    ans.push_back(move);
                    move = {i+2,j+2,i+2,j+1,i+1,j+2};
                    ans.push_back(move);
                    a[i][j] = 0;
                    a[i+1][j] = 0;
                    a[i][j+1] = 0;
                    a[i+1][j+1] = 0;
                }
                else if(a[i][j]==1 && a[i][j+1]==0 && a[i+1][j]==1 && a[i+1][j+1]==0){
                    //cout<<a[i][j]<<a[i][j+1]<<endl<<a[i+1][j]<<a[i+1][j+1]<<endl;
                    vector<int> move = {i+2,j+2,i+2,j+1,i+1,j+2};
                    ans.push_back(move);
                    move = {i+1,j+1,i+2,j+2,i+1,j+2};
                    ans.push_back(move);
                    a[i][j] = 0;
                    a[i+1][j] = 0;
                    a[i][j+1] = 0;
                    a[i+1][j+1] = 0;
                }
                else if(a[i][j]==1 && a[i][j+1]==0 && a[i+1][j]==0 && a[i+1][j+1]==1){
                    //cout<<a[i][j]<<a[i][j+1]<<endl<<a[i+1][j]<<a[i+1][j+1]<<endl;
                    vector<int> move = {i+2,j+2,i+2,j+1,i+1,j+2};
                    ans.push_back(move);
                    move = {i+1,j+1,i+2,j+1,i+1,j+2};
                    ans.push_back(move);
                    a[i][j] = 0;
                    a[i+1][j] = 0;
                    a[i][j+1] = 0;
                    a[i+1][j+1] = 0;
                }
                else if(a[i][j]==0 && a[i][j+1]==1 && a[i+1][j]==1 && a[i+1][j+1]==0){
                    //cout<<a[i][j]<<a[i][j+1]<<endl<<a[i+1][j]<<a[i+1][j+1]<<endl;
                    vector<int> move = {i+2,j+2,i+2,j+1,i+1,j+1};
                    ans.push_back(move);
                    move = {i+2,j+2,i+1,j+2,i+1,j+1};
                    ans.push_back(move);
                    a[i][j] = 0;
                    a[i+1][j] = 0;
                    a[i][j+1] = 0;
                    a[i+1][j+1] = 0;
                }
                else if(a[i][j]==0 && a[i][j+1]==1 && a[i+1][j]==0 && a[i+1][j+1]==1){
                    //cout<<a[i][j]<<a[i][j+1]<<endl<<a[i+1][j]<<a[i+1][j+1]<<endl;
                    vector<int> move = {i+2,j+2,i+2,j+1,i+1,j+1};
                    ans.push_back(move);
                    move = {i+1,j+2,i+2,j+1,i+1,j+1};
                    ans.push_back(move);
                    a[i][j] = 0;
                    a[i+1][j] = 0;
                    a[i][j+1] = 0;
                    a[i+1][j+1] = 0;
                }
                else if(a[i][j]==0 && a[i][j+1]==0 && a[i+1][j]==1 && a[i+1][j+1]==1){
                    //cout<<a[i][j]<<a[i][j+1]<<endl<<a[i+1][j]<<a[i+1][j+1]<<endl;
                    vector<int> move = {i+2,j+2,i+1,j+2,i+1,j+1};
                    ans.push_back(move);
                    move = {i+2,j+1,i+1,j+1,i+1,j+2};
                    ans.push_back(move);
                    a[i][j] = 0;
                    a[i+1][j] = 0;
                    a[i][j+1] = 0;
                    a[i+1][j+1] = 0;
                }
                else if(a[i][j]==1 && a[i][j+1]==0 && a[i+1][j]==0 && a[i+1][j+1]==0){
                    //cout<<a[i][j]<<a[i][j+1]<<endl<<a[i+1][j]<<a[i+1][j+1]<<endl;
                    vector<int> move = {i+1,j+1,i+1,j+2,i+2,j+1};
                    ans.push_back(move);
                    move = {i+2,j+2,i+2,j+1,i+1,j+1};
                    ans.push_back(move);
                    move = {i+2,j+2,i+1,j+2,i+1,j+1};
                    ans.push_back(move);
                    a[i][j] = 0;
                    a[i+1][j] = 0;
                    a[i][j+1] = 0;
                    a[i+1][j+1] = 0;
                }
                else if(a[i][j]==0 && a[i][j+1]==1 && a[i+1][j]==0 && a[i+1][j+1]==0){
                    //cout<<a[i][j]<<a[i][j+1]<<endl<<a[i+1][j]<<a[i+1][j+1]<<endl;
                    vector<int> move = {i+2,j+2,i+1,j+2,i+1,j+1};
                    ans.push_back(move);
                    move = {i+2,j+2,i+2,j+1,i+1,j+2};
                    ans.push_back(move);
                    move = {i+1,j+1,i+2,j+1,i+1,j+2};
                    ans.push_back(move);
                    a[i][j] = 0;
                    a[i+1][j] = 0;
                    a[i][j+1] = 0;
                    a[i+1][j+1] = 0;
                }
                else if(a[i][j]==0 && a[i][j+1]==0 && a[i+1][j]==1 && a[i+1][j+1]==0){
                    //cout<<a[i][j]<<a[i][j+1]<<endl<<a[i+1][j]<<a[i+1][j+1]<<endl;
                    vector<int> move = {i+2,j+2,i+2,j+1,i+1,j+1};
                    ans.push_back(move);
                    move = {i+2,j+2,i+2,j+1,i+1,j+2};
                    ans.push_back(move);
                    move = {i+1,j+1,i+2,j+1,i+1,j+2};
                    ans.push_back(move);
                    a[i][j] = 0;
                    a[i+1][j] = 0;
                    a[i][j+1] = 0;
                    a[i+1][j+1] = 0;
                }
                else if(a[i][j]==0 && a[i][j+1]==0 && a[i+1][j]==0 && a[i+1][j+1]==1){
                    //cout<<a[i][j]<<a[i][j+1]<<endl<<a[i+1][j]<<a[i+1][j+1]<<endl;
                    vector<int> move = {i+2,j+2,i+1,j+2,i+2,j+1};
                    ans.push_back(move);
                    move = {i+2,j+2,i+2,j+1,i+1,j+1};
                    ans.push_back(move);
                    move = {i+2,j+2,i+1,j+2,i+1,j+1};
                    ans.push_back(move);
                    a[i][j] = 0;
                    a[i+1][j] = 0;
                    a[i][j+1] = 0;
                    a[i+1][j+1] = 0;
                }
            }
        }
        for(int i=0;i<n;i+=1){
            for(int j=0;j<m;j+=1){
                cout<<a[i][j];
            }
            cout<<endl;
        }
        cout<<ans.size()<<endl;
        for(int i=0;i<ans.size();i+=1){
            cout<<ans[i][0]<<" "<<ans[i][1]<<" "<<ans[i][2]<<" "<<ans[i][3]<<" "<<ans[i][4]<<" "<<ans[i][5]<<endl;
        }
    }
}

