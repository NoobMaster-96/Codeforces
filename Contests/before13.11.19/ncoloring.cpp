#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n) 
{ 
    if (n <= 1) 
        return false; 
  
    for (int i = 2; i < n; i++) 
        if (n % i == 0) 
            return false; 
  
    return true; 
} 

int main(){
	int t;
	cin>>t;
	for (int i=0;i<t;i++){
		int a,b;
		cin>>a>>b;
		if(a==1 || b==1){
			cout<<"Finite"<<endl;
			continue;
		}
		if(a==b){
			cout<<"Infinite"<<endl;
			continue;
		}
		int isa=isPrime(a);
		int isb=isPrime(b);
		if(isa==1 && isb==1){
			cout<<"Finite"<<endl;
			continue;
		}
		else{
			cout<<"Infinite"<<endl;
			continue;
		}
	}
	return 0;
}