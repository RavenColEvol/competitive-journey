#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;

int main()
{
	FIO;
    int t, n, x, s, me, y, r; cin >> t;
    while(t--) {
        cin >> n >> x;
        s = 0, me = INT_MAX;
        for(int i = 0; i < n; i++) {
            cin >> y;
            s += y;
            me = me > y ? y : me;
        }
        r = s % x;
        if(me <= r) cout << "-1\n";
        else cout << s / x << "\n";
    }
	return 0;
}