#include<bits/stdc++.h>
using namespace std;
#define SIZE 1000000 + 1

int P[SIZE * 2];
string convertToNewString(const string &s) {
    string newString = "@";

    for (int i = 0; i < s.size(); i++) {
        newString += "#" + s.substr(i, 1);
    }

    newString += "#$";
    return newString;
}

string longestPalindromeSubstring(const string &s) {
    string Q = convertToNewString(s);
    int c = 0, r = 0;                

    for (int i = 1; i < Q.size() - 1; i++) {
        
        int iMirror = c - (i - c);

        if(r > i) {
            P[i] = min(r - i, P[iMirror]);
        }

        
        while (Q[i + 1 + P[i]] == Q[i - 1 - P[i]]){
            P[i]++;
        }

       
        if (i + P[i] > r) {
            c = i;              
            r = i + P[i];
        }
    }

    

    int maxPalindrome = 0;
    int centerIndex = 0;

    for (int i = 1; i < Q.size() - 1; i++) {

        if (P[i] > maxPalindrome) {
        	if(i-1-P[i] == 0 || i+p[i]==Q.size()){
        		maxPalindrome = P[i];
            	centerIndex = i;
        	}
        }
    }
    return s.substr( (centerIndex - 1 - maxPalindrome) / 2, maxPalindrome);
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		string pre,suf;
		int len = s.length();
		for(int i=0;i<len/2;i++){
			if(s[i] == s[len-1-i]){
				pre += s[i];
			}
			else{
				break;
			}
		}
		int start = pre.length();
		for(int i=start-1;i>=0;i--){
			suf +=pre[i];
		}
		int l = len - 2*(pre.length());
		s = s.substr(start,l);
		len = s.length();
		string s1;
		for(int i=len-1;i>=0;i--){
			s1 += s[i];
		}
		memset(P,0,sizeof(P));
		string mid1 = longestPalindromeSubstring(s);
		memset(P,0,sizeof(P));
		string mid2 = longestPalindromeSubstring(s1);
		string ans;
		if(pre.length() == 0){
			if(mid1.length()>mid2.length()){
				ans = mid1;
			}
			else{
				ans = mid2;
			}
		}
		else{
			ans = pre;
			if(mid1.length()>mid2.length()){
				ans += mid1;
			}
			else{
				ans += mid2;
			}
			ans += suf;
		}
		cout<<ans<<endl;
	}
}