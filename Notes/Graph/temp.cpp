#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define rep(i, a, b) for(ll i = a; i < b; ++i)
using namespace std;
typedef long long ll;
typedef vector<ll> vll;


int main()
{
	FIO;
    ll d, c, n, fill = 0, temp;
    bool possible = true;
    cin >> d >> c >> n;
    temp = c;
    vll stops(n+1);

    stops[0] = 0;
    for(int i = 1; i <= n; i++) cin >> stops[i];
    stops.push_back(d);

    for(int i = 0; i < stops.size(); ) { 
        if(temp < stops[i]) {
            if(stops[i-1] + c < stops[i]) {
                possible = false;
                break;
            }
            temp = stops[i-1] + c;
            ++fill;
        } else {
            i++;
        }
    }
    if(! possible) cout << "-1\n";
    else
    cout << fill << '\n';
    return 0;
}

/*
950
400
4
200 375 550 750

950
100
4
200 375 550 750
*/