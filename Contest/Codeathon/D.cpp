#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define rep(i, a, b) for(ll i = a; i < b; ++i)
using namespace std;
typedef long long ll;
typedef vector<ll> vll;

const ll mod = 1e9 + 7;

ll calc(ll v) {
    if(v < 2) return 0LL;
    if(v == 2 || v == 3) return v;
    return (calc(v-1) + calc(v-2))%mod;
}

int main()
{
    string s; cin >> s;
    ll c = 1LL;
    if( s.find("c") != string::npos || s.find("k") != string::npos)  {
        cout << 0 << '\n';
    } else {
        ll k = 0LL;
        for(ll i = 0; i < s.size(); i++) {
            if(s[i] == 'f') {
                k++;
            }
            else if(k >= 2){
                c = ( c * calc(k)) % mod;
                k = 0;
            } else {
                k = 0;
            }
        }
        if(k >= 2) {
            c = ( c * calc(k)) % mod;
            k = 0;
        }
        k = 0;
        for(ll i = 0; i < s.size(); i++) {
            if(s[i] == 'g') k++;
            else if(k >= 2){
                c = ( c * calc(k)) % mod;
                k = 0;
            } else {
                k = 0;
            }
        }
        if(k >= 2) {
            c = ( c * calc(k)) % mod;
            k = 0;
        }
        k = 0;
        cout << c % mod  << '\n';
    }
	return 0;
}