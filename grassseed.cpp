// https://open.kattis.com/problems/grassseed
#include <bits/stdc++.h> 

#define rep(i,n) for(int i=0;i<(n);++i)
#define repA(i,a,n) for(int i=a;i<=(n);++i)
#define repD(i,a,n) for(int i=a;i>=(n);--i)

using namespace std;
using ll = long long;

int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	
	float C;
	cin>>C;
	int L;
	cin>>L;
	float tCost;
	rep(i,L){
		float l,b;
		cin>>l>>b;
		float area = l*b;
		tCost = tCost + area * C;
	}
	cout.precision(8); cout<<fixed; 
	cout<<tCost;
	return 0;
}