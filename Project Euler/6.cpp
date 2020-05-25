#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;

ll be(ll n, ll p) {
    if(p == 0) return 1;

    ll r = be(n , p/2);
    r = r * r;
    if(p & 1) r *= n;
    return r;
}

ll soa(ll n) {
    return (n * (n+1))/2;
}

int main()
{
	FIO;
    ll sd = 0;
    for(ll i = 1; i <= 100; i++) sd += i*i;
	cout << soa(100)*soa(100) - sd << '\n';
	return 0;
}