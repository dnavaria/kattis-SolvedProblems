// https://open.kattis.com/problems/sevenwonders
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
typedef unordered_map<string, int> um_string;
typedef unordered_map<char, int> um_char;
typedef map<string, int> m;

int question(string str)
{
    um_char umap;
    vi v;
    int totalScore = 0;
    umap['T'] = 0;
    umap['C'] = 0;
    umap['G'] = 0;

    for (int i = 0; i < str.length(); ++i)
    {
        umap[str[i]]++
;    }

    int min = INT_MAX;
    for (unordered_map<char, int>::iterator i = umap.begin(); i != umap.end(); ++i)
    {
        totalScore = totalScore + (SQ(i->S));
        if(min>i->S){
        	min = i->S;
        }
    }

    totalScore += min * 7;

    return totalScore;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string str;
    cin >> str;
    cout << question(str);
    return 0;
}