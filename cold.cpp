// https://open.kattis.com/problems/cold
#include <bits/stdc++.h>

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define SQ(a) (a)*(a)
#define rep(i,n) for(int i=0;i<(n);++i)
#define repA(i,a,n) for(int i=a;i<(n);++i)
#define repAN(i,a,n) for(int i=a;i<=(n);++i)
#define repD(i,a,n) for(int i=a;i>=(n);--i)
#define M 1000000007
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef unordered_map<string, int> um;
typedef map<string, int> m;

int question(int n)
{
    int x, bz = 0;

    for(int i = 0; i < n ; i++)
    {
        cin >> x;
        if(x < 0)
            bz += 1;
    }
    return bz;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    cout << question(n);
    return 0;
}