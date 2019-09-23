#include <bits/stdc++.h> 
using namespace std; 

long int gcd(long int a, long int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 

long long int findGCD(vector<long long int> dif, int n) 
{ 
    long long int result = dif[0]; 
    for (int i = 1; i < n; i++) 
        result = gcd(dif[i], result); 
  
    return result; 
} 

int main(){
    int n;
    cin>>n;
    vector <long long int > a(n,0);
    for(int i=0 ;i<n; i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    long long int x=a[n-1];
    long long int z=a[n-1]+1;
    long long int y=0;
    vector <long long int > dif;
    long long int sum=0;
    for(int i=0;i<n;i++){
        long long int temp=x-a[i];
        sum+=temp;
        if(temp!=0){
            dif.push_back(temp);
        }
    }
    sort(dif.begin(),dif.end())
    cout<<y<<" "<<z;

    return 0; 
} 