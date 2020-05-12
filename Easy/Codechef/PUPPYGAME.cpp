#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;

/*
    what i know ?
    if 1 1 player who's playing now will lose
    else try exploring both choices and split
*/

bool solve(ll x, ll y) {
    return x&1 && y &1 ;
}


int main()
{
	FIO;
	ll t; cin >> t;
    while(t--) {
        ll x, y; cin >> x >> y;
        bool v = solve(x, y);
        if(v) cout << "Vanka\n";
        else cout << "Tuzik\n";
    }
	return 0;
}