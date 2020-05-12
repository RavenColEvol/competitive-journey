#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;

int main()
{
	FIO;
	ll t; cin >> t;
    while(t--) {
        string s; cin >> s;
        ll a, b, c = 0; cin >> a >> b;
        ll arr[26] = {0};
        for(ll i = 0; i < s.size(); i++) {
            if(a < 0) break; 
            if(arr[s[i] - 'a'] < b) {
                arr[s[i] - 'a']++;
                c++;
            }
            else a--;
        }
        cout << c << '\n';
    }
	return 0;
}