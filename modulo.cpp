// Problem
// https://open.kattis.com/problems/modulo
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

    int x;
    int i = 0;
    map<int, int> m;
    while(i < 10)
    {
        cin >> x;
        int y = x % 42;
        m[y]++;
        i++;
    }

    cout << m.size();
    return 0;
}