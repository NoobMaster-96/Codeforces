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
    	int n,x;
        cin>>n>>x;
        vector<int> a(n);
        int sum = 0;
        int s = -1, en = -1;
        for(int i=0;i<n;i++){
            cin>>a[i];
            a[i]= a[i]%x;
            sum+=a[i];
            sum = sum%x;
            if(a[i]!=0)
            {
                if(s==-1)
                {
                    s=i;
                    en=i;
                }
                else
                {
                    en = i;
                }
            }
        }
        if(x==1)
        {
            cout<<-1<<endl;
        continue;
        }

        int ans = -1;
        int curr = 0;
        if(sum!=0)
        {
            cout<<n<<endl;
            continue;
        }

        if(s==-1)
        {
            cout<<-1<<endl;
            continue;
        }

        ans = max(en,n - s-1);
        cout<<ans<<endl;
    }
}