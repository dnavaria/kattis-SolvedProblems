// Problem
// https://open.kattis.com/problems/r2
#include <bits/stdc++.h> 

#define op1(x) cout<<#x<<"="<<x<<'\n'
#define op2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define op3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
#define rep(i,n) for(int i=0;i<(n);++i)
#define repA(i,a,n) for(int i=a;i<=(n);++i)
#define repD(i,a,n) for(int i=a;i>=(n);--i)

using namespace std;
using ll = long long;

int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	int r1,s;
	cin>>r1>>s;
	cout<<(2*s)-r1;
	return 0;
}