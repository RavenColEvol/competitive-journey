#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;

int main()
{
	FIO;
	ll t, n, temp, start, k;
    cin >> t;
    while(t--) {
        cin >> n >> k;
        set<ll> s;
        for(ll i = 0; i < n; i++) {
            cin >> temp;
            s.insert(temp);
        }
        start = 1;
        while(1) {
            if(s.find(start) == s.end()) {
                if(k == 0) break;
                k--;
            }
            start++;
        }
        cout << start - 1 << '\n';
    }
	return 0;
}