#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		string str;
		cin>>str;
		int len = str.length();
		bool check = 1;
		for(int j=0;j<len-1;j++){
			if(str[j]!= '?'){
				if(str[j]==str[j+1]){
					cout<<-1<<endl;
					check = 0;
					break;
				}
			}
			else{
				if(j==0){
					if(str[j+1]=='a'){
						str[j]='b';
					}
					else if(str[j+1]=='b'){
						str[j]='c';
					}
					else if(str[j+1]=='c'){
						str[j]='a';
					}
					else if(str[j+1]=='?'){
						str[j]='a';
					}
				}
				else{
					if(str[j-1]=='a' && str[j+1]!='b'){
						str[j]='b';
					}
					else if(str[j-1]=='a' && str[j+1]!='c'){
						str[j]='c';
					}
					else if(str[j-1]=='b' && str[j+1]!='c'){
						str[j]='c';
					}
					else if(str[j-1]=='b' && str[j+1]!='a'){
						str[j]='a';
					}
					else if(str[j-1]=='c' && str[j+1]!='a'){
						str[j]='a';
					}
					else if(str[j-1]=='c' && str[j+1]!='b'){
						str[j]='b';
					}
				}
			}
		}
		if(str[len-1]=='?'){
			if(str[len-2]=='a'){
				str[len-1]='b';
			}
			else if(str[len-2]=='b'){
				str[len-1]='c';
			}
			else if(str[len-2]=='c'){
				str[len-1]='a';
			}
		}
		if(len==1){
			if(str[0]=='?'){
				str[0]='a';
			}
		}
		if(check==1){
			cout<<str<<endl;
		}
	}
}