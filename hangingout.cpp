// Problem
// https://open.kattis.com/problems/hangingout

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

    int L, E, n, denied;
    string enter = "enter";
    string leave = "leave";
    string cmd;
    cin >> L >> E;

    rep(i, E)
    {
        cin >> cmd >> n;
        if (cmd.compare(enter) == 0)
        {
            if (n <= L)
            {
                L = L - n;
            }
            else if(n > L)
            {
                denied++;
            }
        }
        else if (cmd.compare(leave) == 0)
        {
            L = L + n;
        }
    }
    cout<<denied;
    return 0;
}