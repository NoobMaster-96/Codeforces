#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b, c;
        cin >> a >> b >> c;
        long long int mini = LLONG_MAX;
        long long int ta, tb, tc;
        for (long long int i = 1; i <= 10000; i++)
        {
            for (long long int j = i; j <= 10000; j += i)
            {
                long long int total = abs(a - i) + abs(b - j);
                long long int maxi = min(c % j, j - c % j);
                long long int tcc = c;
                if (maxi == c % j)
                {
                    tcc -= tcc % j;
                }
                else
                {
                    tcc += j - tcc % j;
                }
                total += maxi;
                if (total < mini)
                {
                    mini = total;
                    ta = i;
                    tb = j;
                    tc = tcc;
                }
            }
        }
        cout << mini << endl;
        cout << ta << " " << tb << " " << tc << endl;
    }
}