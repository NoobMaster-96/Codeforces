#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main(){   
    int t;
    cin>>t;
    while(t--){
        double h,c,t;
        cin>>h>>c>>t;
        if(h==t){
            cout<<1<<endl;
            continue;
        }
        double sum = h+c;
        double mid = sum/2;
        if(mid==t){
            cout<<2<<endl;
            continue;
        }
        if(t<mid){
            cout<<2<<endl;
            continue;
        }
        int up = (h-t);
        int down = (2*t-h-c);
        double x,y;
        if(up%down==0){
            x = (up/down);
            cout<<2*x+1<<endl;
            continue;
        }
        else{
            x = (up/down)+1;
            y = x-1;

            double ans1 = (((x*sum)+h)/((2*x)+1));
            double ans2 = (((y*sum)+h)/((2*y)+1));
            if(abs(t-ans1)<abs(t-ans2)){
                cout<<2*x+1<<endl;
            }
            else{
                cout<<2*y+1<<endl;
            }
        }

    }
}