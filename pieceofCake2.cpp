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
	
	int s,x,y;
	cin>>s>>x>>y;
	int x1,x2,x4,x3;
	x1 = x*y*4;
	x2 = (s-x)*y*4;
	x3 = (s-y)*x*4;
	x4 = (s-x)*(s-y)*4;
	cout<<max(x1,max(x2,max(x3,x4)));



	return 0;
}