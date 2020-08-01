// Problem
// https://open.kattis.com/problems/nastyhacks

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

    int n;
    cin >> n;
    int r, e, c;
    rep(i, n)
    {
        cin >> r >> e >> c;
        int tProfit = e - c;
        if ( tProfit > r )
            cout << "advertise" << '\n';
        else if(tProfit == r)
        	cout << "does not matter" << '\n';
        else
        	cout << "do not advertise" << '\n';

    }
    return 0;
}