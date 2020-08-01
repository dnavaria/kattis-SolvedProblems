// Problem
// https://open.kattis.com/problems/heartrate

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
	
	int n,b;
	float t;
	cin>>n;
	rep(i,n){
		cin>>b>>t;
		float abpm,bpm,mabpm;
		bpm = (60*b)/t;
		float temp = 60/t;
		abpm = bpm-temp;
		mabpm = bpm+temp;

		cout.precision(4); cout<<fixed; 
		cout<<abpm<<' '<<bpm<<' '<<mabpm<<'\n';
	}
	return 0;
}