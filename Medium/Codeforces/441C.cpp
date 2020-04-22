#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;

vector<vector<ll>> dp(302, vector<ll>(302));
ll n, m, k;
void fillkcells() {
    ll t = k - 1;

}

int main()
{
	FIO;
    cin >> n >> m >> k;
    fillkcells();
    for(auto i : dp) {
        for(ll j : i) {
            cout << j << ' ';
        }
        cout << '\n';
    }
	return 0;
}