#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;

int main()
{
	FIO;
	ll t; cin >> t;
    while(t--) {
        ll n, m, mn = INT_MAX, mx = 0, i = 0, mid, tmp; cin >> n >> m;
        for(ll i = 0; i < m; i++) {
            cin >> tmp;
            if(tmp > mx) mx = tmp;
            if(tmp < mn) mn = tmp;
        }
        mid = (mn + mx)/2, mn = mid - mn + 1;
        
        while(i <= mid) {
            cout << mx << ' ';
            mx--, i++;
        } 
        while(i < n) {
            cout << (mn) << ' ';
            mn++, i++;
        } 
        cout << '\n'; 
    }
	return 0;
}