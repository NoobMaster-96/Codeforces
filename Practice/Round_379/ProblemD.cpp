#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define lli long long int 

bool eq1(int x, int y, int x1, int y1){
	if((x-x1)==(-1)*(y-y1)){
		return true;
	}
	return false;
}

bool eq2(int x, int y, int x1, int y1){
	if((x-x1)==(y-y1)){
		return true;
	}
	return false;
}

int main(){
	int n;
	cin>>n;
	int x,y;
	cin>>x>>y;
	vector<pair<int,int>> block(8);
	vector<pair<int,int>> cut(8);
	block[0] = make_pair(INT_MIN,INT_MIN);
	block[1] = make_pair(INT_MIN,y);
	block[2] = make_pair(INT_MIN,INT_MAX);
	block[3] = make_pair(x,INT_MAX);
	block[4] = make_pair(INT_MAX,INT_MAX);
	block[5] = make_pair(INT_MAX,y);
	block[6] = make_pair(INT_MAX,INT_MIN);
	block[7] = make_pair(x,INT_MIN);
	for(int i=0;i<8;i++){
		cut[i] = block[i];
	}
	while(n--){
		char ch,x1,y1;
		cin>>ch>>x1>>y1;
		if(ch=='R'){
			if(x1==x && y1>y){
				if(y1<cut[3].second){
					cut[3].second = y1;
				}
			}
			else if(x1==x && y1<y){
				if(y1>cut[7].second){
					cut[7].second = y1;
				}
			}
			else if(y1==y && x1>x){
				if(x1<cut[5].first){
					cut[5].first = x1;
				}
			}
			else if(y1==y && x1<x){
				if(x1>cut[1].first){
					cut[1] = make_pair(x1,y1);
				}
			}
			if(eq1(x,y,x1,y1)){
				if(x1<x){
					if(x1>block[2].first){
						block[2].first = x1;
						block[2].second = y1;
					}
				}
				else{
					if(x1<block[6].first){
						block[6].first = x1;
						block[6].second = y1;
					}
				}
			}
			else if(eq2(x,y,x1,y1)){
				if(x1<x){
					if(x1>block[0].first){
						block[0].first = x1;
						block[0].second = y1;
					}
				}
				else{
					if(x1<block[4].first){
						block[4].first = x1;
						block[4].second = y1;
					}
				}
			}
		}
		else if(ch=='B'){
			if(eq1(x,y,x1,y1)){
				if(x1<x){
					if(x1>cut[2].first){
						cut[2].first = x1;
						cut[2].second = y1;
					}
				}
				else{
					if(x1<cut[6].first){
						cut[6].first = x1;
						cut[6].second = y1;
					}
				}
			}
			else if(eq2(x,y,x1,y1)){
				if(x1<x){
					if(x1>cut[0].first){
						cut[0].first = x1;
						cut[0].second = y1;
					}
				}
				else{
					if(x1<cut[4].first){
						cut[4].first = x1;
						cut[4].second = y1;
					}
				}
			}
			if(x1==x && y1>y){
				if(y1<block[3].second){
					block[3].second = y1;
				}
			}
			else if(x1==x && y1<y){
				if(y1>block[7].second){
					block[7].second = y1;
				}
			}
			else if(y1==y && x1>x){
				if(x1<block[5].first){
					block[5].first = x1;
				}
			}
			else if(y1==y && x1<x){
				if(x1>block[1].first){
					block[1].first = x1;
				}
			}
		}
		else{
			if(eq1(x,y,x1,y1)){
				if(x1<x){
					if(x1>cut[2].first){
						cut[2].first = x1;
						cut[2].second = y1;
					}
				}
				else{
					if(x1<cut[6].first){
						cut[6].first = x1;
						cut[6].second = y1;
					}
				}
			}
			else if(eq2(x,y,x1,y1)){
				if(x1<x){
					if(x1>cut[0].first){
						cut[0].first = x1;
						cut[0].second = y1;
					}
				}
				else{
					if(x1<cut[4].first){
						cut[4].first = x1;
						cut[4].second = y1;
					}
				}
			}
			else if(x1==x && y1>y){
				if(y1<cut[3].second){
					cut[3].second = y1;
				}
			}
			else if(x1==x && y1<y){
				if(y1>cut[7].second){
					cut[7].second = y1;
				}
			}
			else if(y1==y && x1>x){
				if(x1<cut[5].first){
					cut[5].first = x1;
				}
			}
			else if(y1==y && x1<x){
				if(x1>cut[1].first){
					cut[1].first = x1;
				}
			}
		}
	}
	for(int i=0;i<8;i++){
		cout<<cut[i].first<<" "<<cut[i].second<<" "<<block[i].first<<" "<<block[i].second<<endl;
	}
	bool flag = false;
	if(cut[0].first>block[0].first){
		flag = true;
	}
	if(cut[1].first>block[1].first){
		flag = true;
	}
	if(cut[2].first>block[1].first){
		flag = true;
	}
	if(cut[3].second<block[3].second){
		flag = true;
	}
	if(cut[4].first<block[4].first){
		flag = true;
	}
	if(cut[5].first<block[5].first){
		flag = true;
	}
	if(cut[6].first<block[6].first){
		flag = true;
	}
	if(cut[7].second>block[7].second){
		flag = true;
	}
	if(flag){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
}