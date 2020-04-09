#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef unsigned long long int ll;

ll t, n, temp, l;

int main()
{
    FIO;
    cin >> t;
    while (t--)
    {
        cin >> n;
        l = -1;
        
        vector<ll> dp(n,0);

        for (ll i = 0; i < n; i++)
        {
            cin >> temp;

            bool is_odd = temp & 1;

            if(is_odd) {
                if( i == 0) dp[i] = 1;
                else dp[i] = dp[i-1] + 1;
            }
            else {
                if(temp % 4 == 0) {
                    dp[i] = i + 1;
                }
                else {
                    dp[i] = l + 1;
                }
                l = i;
            }
        }

        // for(int i = 0; i < n; i++) cout << dp[i] << ' ';
        // cout << '\n';

        cout << accumulate(dp.begin(), dp.end(), 0LL) << '\n';
    }
    return 0;
}

/*
5
5
5 4 2 9 8
6
3 1 9 4 5 3
7
6 4 2 8 5 1 9
8
3 4 6 2 5 8 7 1
10
5 6 4 2 7 8 1 9 3 10
*/