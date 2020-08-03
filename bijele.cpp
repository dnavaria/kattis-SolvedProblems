// https://open.kattis.com/problems/bijele
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

void question()
{

}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vi v;
    vi v1 = {1,1,2,2,2,8};
    int x;
    for(int i = 0; i < 6 ; i++)
    {
        cin >> x;
        v.PB(x);
    }

    for(int i = 0; i <6 ; i++){ 
    	if (v.at(i)<v1.at(i))
    	{
    		cout<<v1.at(i)-v.at(i)<<' ';
    	}else if (v.at(i)>v1.at(i))
    	{
    		cout<<'-'<<v.at(i)-v1.at(i)<<' ';
    	}else{
    		cout<<0<<' ';
    	}
    }

    return 0;
}