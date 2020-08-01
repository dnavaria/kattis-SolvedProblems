// https://open.kattis.com/problems/different
#include <bits/stdc++.h>

#define rep(i,n) for(int i=0;i<(n);++i)
#define repA(i,a,n) for(int i=a;i<=(n);++i)
#define repD(i,a,n) for(int i=a;i>=(n);--i)

using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long a, b;

    while(cin >> a >> b)
    {
        long long x = (a > b) ? a - b : b - a;
        cout << x << '\n';

    }

    return 0;
}