#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

string lcs(string a, string b){
    int n = a.length();
    int m = b.length();
    int l[n+1][m+1];
    for(int i=0;i<=n;i+=1){
        for(int j=0;j<=m;j+=1){
            if(i == 0 || j == 0){
                l[i][j] = 0; 
            }
            else if(a[i-1] == b[j-1]){
                l[i][j] = l[i-1][j-1] + 1; 
            }
            else{
                l[i][j] = max(l[i-1][j], l[i][j-1]); 
            }
        }
    }
    int len = l[n][m];
    string Lcs;
    for(int i=0;i<len;i+=1){
        Lcs += " ";
    }
    int i = n, j = m; 
    while (i>0 && j>0){ 
        if(a[i-1] == b[j-1]){ 
            Lcs[len-1] = a[i-1];
            i--; 
            j--; 
            len--;
        }
        else if (l[i-1][j] > l[i][j-1]){
            i--; 
        }
        else{
            j--; 
        }
    }
    return Lcs;
}

int minWindow(string S, string T) {
    int tidx = 0;
    int tlen = T.size();
    int n = S.size();
    int i = 0;
    int length = INT_MAX;
    int start = -1;
    while (i < n) {
        if (S[i] == T[tidx]) {
            tidx++;
            if (tidx == tlen) {
                int end = i + 1;
                tidx--;
                while (tidx >= 0) {
                    if (S[i] == T[tidx]) {
                        tidx--;
                    }
                    i--;
                }
                i++;
                tidx++;
                if (end - i < length) {
                    length = end - i;
                    start = i;
                }
            }
        }
        i++;
    }
    return length;
}

int main(){
    int n,m;
    cin>>n>>m;
    string a,b;
    cin>>a>>b;
    string ans = lcs(a,b);
    int lena = minWindow(a,ans);
    int lenb = minWindow(b,ans);
    //cout<<ans<<" "<<lena<<" "<<lenb;
    int ans_ = 4*(ans.length()) - lena - lenb;
    cout<<ans_;
}
