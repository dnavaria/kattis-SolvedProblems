// https://open.kattis.com/problems/fizzbuzz
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

    int X, Y, N;
    cin >> X >> Y >> N;

    repA(i, 1, N)
    {
        if ((i % X == 0) && (i % Y == 0))
        {
            cout << "FizzBuzz" << '\n';
        }
        else if (i % X == 0)
        {
            cout << "Fizz" << '\n';
        }
        else if (i % Y == 0)
        {
            cout << "Buzz" << '\n';
        }
        else
        {
            cout << i << '\n';
        }
    }
    return 0;
}