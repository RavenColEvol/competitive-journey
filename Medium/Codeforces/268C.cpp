#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;

int main()
{
	FIO;
    ll x, y; cin >> x >> y;
    cout << min(x,y) + 1 << '\n';
    for(ll cx = 0, cy = y; cx <= x && cy >= 0; cx++, cy--) {
        cout << cx << ' ' << cy << '\n';
    }
	return 0;
}