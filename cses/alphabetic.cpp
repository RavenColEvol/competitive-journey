#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define rep(i, a, b) for(ll i = a; i < b; ++i)
using namespace std;
typedef long long ll;
typedef vector<ll> vll;

int main()
{
	FIO;
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    set<string> a;
    do {
        a.insert(s);
    }while(next_permutation(s.begin(), s.end()));
    cout << a.size() << '\n';
    for(string x : a) {
        cout << x << '\n';
    }
	return 0;
}