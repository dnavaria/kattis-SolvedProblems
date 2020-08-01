// Problem
// https://open.kattis.com/problems/nodup
#include <bits/stdc++.h>

#define rep(i,n) for(int i=0;i<(n);++i)
#define repA(i,a,n) for(int i=a;i<=(n);++i)
#define repD(i,a,n) for(int i=a;i>=(n);--i)

using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string str;
    getline(cin, str);

    stringstream ss(str);
    unordered_map<string, int> um;
    while(!ss.eof())
    {
        string temp;
        ss >> temp;
        um[temp]++;
    }
    bool val = true;
    for (std::unordered_map<string, int>::iterator i = um.begin(); i != um.end(); ++i)
    {
        if( i->second > 1)
        {
            val = false;
            break;
        }
    }
    if(val)
        cout << "yes";
    else
        cout << "no";
    return 0;
}