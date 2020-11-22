#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
    int t;
    cin>>t;
    while(t--){
        int d,k;
        cin>>d>>k;
        double s = d/sqrt(2.0);
        int st = (int)s;
        st -= (st%k);
        double dist = sqrt((double)pow(st+k,2)+(double)pow(st,2));
        if(dist>(double)d){
            cout<<"Utkarsh"<<endl;
        }
        else{
            cout<<"Ashish"<<endl;
        }
    }
}
