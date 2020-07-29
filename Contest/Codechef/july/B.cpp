#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define rep(i, a, b) for(ll i = a; i < b; ++i)
#define debug(x) cout << #x << '=' << x << '\n'
using namespace std;
typedef long long ll;
typedef vector<ll> vll;

ll t, p, e, x, y, b, n, m;

int main()
{
	FIO;
    for(cin>>t;t--;) {
        cin >> n >> m;
        if(m == 0) {
            cout << "-1\n";
            continue;
        } 

        ll arr[40][5] ;
        rep(i, 0, 40)
            rep(j, 0, 5) arr[i][j] = INT_MAX;
        vll primes;

        rep(i, 0, n) {
            cin >> x >> y >> b;
            x--, y--;

            if(b == 0) {
                arr[x][0] = -1;
                arr[y][0] = -1;
            }

            rep(j, 0, b) {

                cin >> p >> e;
                ll idx;
                if(binary_search(primes.begin(), primes.end(), p)) {
                    idx = lower_bound(primes.begin(), primes.end(), p) - primes.begin();
                }
                else {
                    primes.push_back(p);
                    idx = primes.size() - 1;
                }
                arr[x][idx] = min(arr[x][idx], e);
                arr[y][idx] = min(arr[y][idx], e);
            }
        }
    }
	return 0;
}