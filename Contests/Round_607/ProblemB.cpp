#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string A,B;
		cin>>A>>B;
		if(A<B){
			cout<<A<<endl;
		}
		else{
			int lenA = A.length();
			int lenB = B.length();
			int n;
			int i=0;
			if(lenA<lenB){
				n=lenA;
			}
			else{
				n=lenB;
			}
			for(;i<n;i++){
				if(A[i]>B[i]){
					break;
				}
			}
			if(i==n){
				if(n==lenB){
					int flag = 0;
					char min='Z';
					int idx;
					for(int j=i;j<lenA;j++){
						if(A[j]<B[i-1]){
							char temp = A[j];
							if(temp<min){
								min = temp;
								idx = j;
							}
							flag = 1;
						}
					}
					if(flag == 1){
						char temp = A[i-1];
						A[i-1] = A[idx];
						A[idx] = temp;
						if(A<B){
							cout<<A<<endl;
						}
						else{
							cout<<"---"<<endl;
						}
					}
					else{
						cout<<"---"<<endl;
					}
				}
			}
			else if(i==n-1){
				if(n==lenA){
					cout<<"---"<<endl;
				}
				else{
					int flag = 0;
					char min='Z';
					int idx;
					for(int j=i+1;j<lenA;j++){
						if(A[j]<=B[i]){
							char temp = A[j];
							if(temp<min){
								min=temp;
								idx = j;
							}
							flag = 1;
						}
					}
					if(flag == 1){
						char temp = A[i];
						A[i] = A[idx];
						A[idx] = temp;
						if(A<B){
							cout<<A<<endl;
						}
						else{
							cout<<"---"<<endl;
						}
					}
					else{
						cout<<"---"<<endl;
					}
				}
			}
			else if(i<n-1){
				int flag = 0;
				char min = 'Z';
				int idx;
				for(int j=i+1;j<lenA;j++){
					if(A[j]<=B[i]){
						char temp = A[j];
						if(temp<min){
							min = temp;
							idx = j;
						}
						flag = 1;
					}
				}
				if(flag == 1){
					char temp = A[i];
					A[i] = A[idx];
					A[idx] = temp;
					if(A<B){
						cout<<A<<endl;
					}
					else{
						cout<<"---"<<endl;
					}
				}
				else{
					cout<<"---"<<endl;
				}
			}
		}
	}
}