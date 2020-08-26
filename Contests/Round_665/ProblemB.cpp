#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
    int t;
    cin>>t;
    while(t--){
        int a1,b1,c1,a2,b2,c2;
        cin>>a1>>b1>>c1>>a2>>b2>>c2;
        int temp = min(a1,c2);
        a1-=temp;
        c2-=temp;
        temp = min(c2,c1);
        c2-=temp;
        c1-=temp;
        if(c1>0){
            cout<<2*min(c1,b2)<<endl;
        }
        else{
            cout<<-2*min(c2,b1)<<endl;
        }
    }
}