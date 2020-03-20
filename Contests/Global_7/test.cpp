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
        	if(1){
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
		memset(P,0,sizeof(P));
		cout<< longestPalindromeSubstring(s)<<endl;
	}
}