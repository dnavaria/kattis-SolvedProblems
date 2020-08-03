// https://open.kattis.com/problems/spavanac
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

void question(int h, int m)
{

    m -= 45;
    if (m < 0)
    {
        h--;
        if(h < 0)
            h += 24;
        m += 60;
    }

    cout << h << ' ' << m;

}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int h, m;
    cin >> h >> m;
    question(h, m);
    return 0;
}