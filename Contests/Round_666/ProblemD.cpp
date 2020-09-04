#include<bits/stdc++.h>
using namespace std;

void permuteUnique(vector<string> &samples, string s, map<char, int> &map, int n){
    if (n <= 0){
        samples.push_back(s);
        return;
    }
    for (auto &p : map){
        if (p.second <= 0) continue;
        p.second--;
        s.push_back(p.first);
        permuteUnique(samples, s, map, n - 1);
        s.pop_back();
        p.second++;
    }
}

int main(){
    int n;
    cin>>n;
    vector<string> s(n);
    vector<int> b(n);
    vector<int> c(n);
    for(int i=0;i<n;i++){
        cin>>s[i]>>b[i]>>c[i];
    }
    map<char,int> m;
    m['A'] = 4;
    m['B'] = 4;
    m['C'] = 4;
    m['D'] = 4;
    vector<string> samples;
    permuteUnique(samples,"",m,4);
    int len = samples.size();
    for(int i=0;i<len;i++){
    	bool flag = true;
    	vector<int> f(4,0);
    	for(int k=0;k<4;k++){
    		f[samples[i][k]-'A']+=1;
    	}
    	for(int j=0;j<n;j++){
    		int x = 0;
    		int y = 0;
    		vector<int> temp(4,0);
    		for(int k=0;k<4;k++){
    			if(s[j][k]==samples[i][k]){
    				x++;
    			}
    			temp[s[j][k]-'A']+=1;
    		}
    		for(int k=0;k<4;k++){
    			y += min(f[k],temp[k]);
    		}
    		y -= x;
    		if(x!=b[j] || y!=c[j]){
    			flag = false;
    			break;
    		}
    	}
    	if(flag){
    		cout<<samples[i];
    		break;
    	}
    }
}
