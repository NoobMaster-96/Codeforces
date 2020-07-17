#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
bool poss(int a,int b,int d){
    if(b>d) return 1;
    if(d%b==0) return 1;
    int x = d%a;
    int y = d/a;
    int num = x/y+a;
    if(x%y) num++;
    if(num<=b) return 1;
    return 0;
}
int main(){
	int a,d;
    cin>>a>>d;
    int n = a;
    int r = d%a;
    if(r==0){
        cout<<a;
        return 0;
    }
    int ans = 0;
    int e = 1e9;
    while(n<=e){
        int mid = (n+e)/2;
        if(poss(a,mid,d)){
            e = mid-1;
            ans = mid;
        }
        else{
            n = mid+1;
        }
    }
    cout<<ans;
}