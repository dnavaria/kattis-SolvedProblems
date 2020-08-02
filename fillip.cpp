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
typedef pair<int,int> pi;
typedef unordered_map<string,int> um;
typedef map<string,int> m;

int reverseDigits(int number){

	int place=100;
	int res=0;
	for (int i = 0; place>=1; ++i)
	{
		int temp = number%10;
		temp = temp*place;
		res = res + temp;
		
		place = place/10;
		number = number/10;
	}
	return res;
}

int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	
	int a,b,final;
	cin>>a>>b; 
	a = reverseDigits(a);
	b = reverseDigits(b);
	final = (a<b)?b:a;
	cout<<final;
	return 0;
}