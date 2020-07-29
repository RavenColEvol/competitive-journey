#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define rep(i, a, b) for(ll i = a; i < b; ++i)
using namespace std;
typedef long long ll;
typedef vector<ll> vll;

bool isprime(ll n) {
    if(n <= 3) return n >= 2;

    if(n % 3 == 0 || n % 2 == 0) return false;

    for(ll i = 5; i * i <= n; i+=6) {
        if(n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

ll nd(ll n) {
    return log10(n) + 1;
}


ll be(ll n, ll p) {
    if(p == 0) return 1;

    ll r = be(n, p/2);

    r = r * r;

    if(p&1) r *= n;

    return r;
}

int main()
{
	FIO;
    ll a, b; cin >> a >> b;
    vll p;
    set<ll> sl;
    for(ll i = a; i <= b; i++) {
        if(isprime(i)) p.push_back(i);
    }
    ll n = (ll)p.size();
    for(ll i = 0; i < n; i++) {
        for(ll j = 0; j < n; j++) {
            if(i != j) {
                ll v = p[i] * be(10, nd(p[j])) + p[j];
                if(isprime(v)) {
                    sl.insert(v);
                }
            }
        }
    }
    n = (ll)sl.size();
    vector<ll> fibo(n);
    fibo[0] = *sl.begin();
    fibo[1] = *sl.rbegin();
    for(ll i = 2; i < n; i++) {
        fibo[i] = fibo[i-1] + fibo[i-2];
    }
    cout << fibo[n-1] ;
	return 0;
}