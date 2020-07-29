// Problem
// https://open.kattis.com/problems/pokerhand
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

	string str;
    getline(cin,str);

    stringstream ss(str);
    vector<string> s;
    while(!ss.eof()) {
    	string temp;
    	ss>>temp;
        s.push_back(temp);
    }

    unordered_map<char,int> um;
    int i=0;
    while(i<s.size()) {
    	um[s.at(i)[0]]++;
        ++i;
    }

    int max = 0;
    unordered_map<char,int>::iterator iter = um.begin();
    for(;iter!=um.end();iter++){
    	if(iter->second > max){
    		max = iter->second;
    	}
    }
    cout<<max;

	return 0;
}