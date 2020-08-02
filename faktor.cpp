// https://open.kattis.com/problems/faktor
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

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef unordered_map<string, int> um;
typedef map<string, int> m;

int question(int tc, int a, int im)
{
    if(a == 1)
    {
        return im;
    }
    int x = tc - a;
    int y = ((x / a) == im ) ? x : x + 1;
    return y;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int A, I;
    cin >> A >> I;

    int Tc = A * I;
    cout << question(Tc, A, I);;

    return 0;
}