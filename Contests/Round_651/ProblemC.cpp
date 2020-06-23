#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int cnt2 = 0;
        int k = n;
        while(n>1 && n%2==0){
            n /= 2;
            cnt2++;
        }
        bool check = false;
        if(n==1){
            check = true;
        }
        int cnt = 0;
        for(int i=2;i<=sqrt(n);i++){
            while(n>1 && n%i==0){
                n=n/i;
                cnt++;
            }
        }
        if(n!=1){
            cnt++;
        }
        if(k==1){
            cout<<"FastestFinger"<<endl;
        }
        else if(k==2){
            cout<<"Ashishgup"<<endl;
        }
        else if(k%2){
            cout<<"Ashishgup"<<endl;
        }
        else if(check!=true){
            if(cnt>1)
                cout<<"Ashishgup"<<endl;
            else{
                if(cnt2!=1){
                    cout<<"Ashishgup"<<endl;
                }
                else{
                    cout<<"FastestFinger"<<endl;
                }
            }
        }
        else{
            if(cnt2==1){
                cout<<"Ashishgup"<<endl;
            }
            else{
                cout<<"FastestFinger"<<endl;
            }
        }
    }
}