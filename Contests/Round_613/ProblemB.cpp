#include<bits/stdc++.h>
using namespace std;

int maxSubArraySum(vector<int> a, int size) 
{ 
    int max_so_far = INT_MIN, max_ending_here = 0; 
  
    for (int i = 0; i < size; i++) 
    { 
        max_ending_here = max_ending_here + a[i]; 
        if (max_so_far < max_ending_here) 
            max_so_far = max_ending_here; 
  
        if (max_ending_here < 0) 
            max_ending_here = 0; 
    } 
    return max_so_far; 
}

int main(){

	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> taste(n);
		int negno = 0;
		int tasteY = 0;
		for(int i=0;i<n;i++){
			cin>>taste[i];
			tasteY += taste[i];
			if(taste[i]<0){
				negno++;
			}
		}
		int maxtaste = maxSubArraySum(taste,n);
		if(negno==0){
			cout<<"YES"<<endl;
		}
		else if(tasteY<=0){
			cout<<"NO"<<endl;
		}
		else if(tasteY > maxtaste){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}	
	return 0;
}