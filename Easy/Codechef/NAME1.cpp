#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;

int main()
{
	FIO;
	ll t, n; cin >> t;
    while(t--)
    {
        string a,b; cin >> a >> b;
        string c = "", temp;
        cin >> n;
        while(n--) {
            cin >> temp;
            c += temp;
        }
        vector<int> dp(26, 0);
        for(char x : a) dp[x - 'a']++;
        for(char x : b) dp[x - 'a']++;
        bool possible = true;
        for(char x : c) {
            if(--dp[x-'a'] < 0) {
                possible = false;
                break;
            }
        }
        cout << (possible ? "YES" : "NO") << '\n';
    }
	return 0;
}