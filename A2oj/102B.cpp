#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define rep(i, a, b) for(ll i = a; i < b; ++i)
using namespace std;
typedef long long ll;
typedef vector<ll> vll;

int main()
{
	FIO;
    string n;
	ll c = 0, t, x; cin >> n;
    if(n.size() == 1)
        cout << 0 << '\n';
    else {
        c++, t = 0;
        for(char c : n) {
            t += c - '0';
        }
        while(t / 10) {  
            c++;
            x = 0;
            while(t) {
                x += t % 10;
                t /= 10;
            }
            t = x;
        }
        cout << c << '\n';
    }
	return 0;
}
