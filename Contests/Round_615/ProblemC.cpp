#include<bits/stdc++.h>
using namespace std;
map<int,int> m;
void factorize(int n){ 
    int count = 0; 
    while (!(n % 2)) { 
        n /=2;     
        count++; 
    } 
  
    if (count){
        m[2] = count;
    } 
    for (int i = 3; i <= sqrt(n); i += 2) { 
        count = 0; 
        while (n % i == 0) { 
            count++; 
            n = n / i; 
        } 
        if (count) 
            m[i] = count;
    }  
    if (n > 2) 
        m[n] = 1;
} 
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		m.clear();
		factorize(n);
		 if(m.size()==1){
            bool flag = 1;
            int num1 = 1;
            for(auto x:m){
                if(x.second<=5){
                    flag = false;
                }
                num1 = x.first;
            }
            int num2 = num1*num1;
            int num3 = n/(num2*num1);
            if(flag){
                cout<<"YES"<<endl;
                cout<<num1<<" "<<num2<<" "<<num3<<endl;

            }else{
                cout<<"NO"<<endl;
            }
        }else if(m.size()==2){
            int num1 = 1;
            int num2 = 1;
            int num3 = 1;
            for(auto x:m){
                if(num1==1){
                    num1 = x.first;
                }else{
                    num2 = x.first;
                }
            }
            num3 = n/(num1*num2);
            if(num3==num1 || num3==num2 || num3==1){
                cout<<"NO"<<endl;
            }else{
                cout<<"YES"<<endl;
                cout<<num1<<" "<<num2<<" "<<num3<<endl;
            }
        }else{
            cout<<"YES"<<endl;
            int num1 = 1;
            int num2 = 1;
            int num3 = 1;
            for(auto x:m){
                if(num1==1){
                    num1 = x.first;
                }else{
                    if(num2==1){
                        num2 = x.first;
                    }else{
                        break;
                    }
                }
            }
            num3 = n/(num2*num1);
            cout<<num1<<" "<<num2<<" "<<num3<<endl;

        }


    }
}
	