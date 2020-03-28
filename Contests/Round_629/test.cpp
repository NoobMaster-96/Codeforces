#include <bits/stdc++.h>
using namespace std;
int main()
{
    multimap<int, int>mp;
    mp.insert({1, 10});
    mp.insert({2, 10});
    mp.insert({1, 5});
    mp.insert({2, 10});
    mp.insert({3, 7});
    cout<<mp.size()<<endl;
    return 0;
}