// Problem
// https://open.kattis.com/problems/pet


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

    int ar[5][4];

    int maxSum = 0,index;
    for (int i = 0; i < 5; ++i)
    {
        int sum = 0;
        for(int j = 0; j < 4 ; j++)
        {
            cin >> ar[i][j];
            sum = sum + ar[i][j];
        }
        if (maxSum<sum)
        {
        	maxSum = sum;
        	index = i+1;
        }
    }

    cout<<index<<" "<<maxSum;


    return 0;
}