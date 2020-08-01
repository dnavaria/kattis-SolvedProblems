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

    int n, num;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
    	cin>>num;
        if (num%2==0)
        {
        	cout<<num<<" is even\n";
        }else{
        	cout<<num<<" is odd\n";
        }
    }


    return 0;
}