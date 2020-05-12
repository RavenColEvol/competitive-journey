#include <bits/stdc++.h>
#define test(t) for (cin >> t; t; --t)
#define rep(i, n) for (ll i = 0; i < n; i++)
#define repr(i, k, n) for (ll i = k; i < n; i++)
#define repr_r(i, n) for (ll i = n - 1; i >= 0; i--)
#define mp make_pair
#define pb push_back
#define f first
#define sec second
#define in cin >>
#define out cout <<
#define endl '\n'
#define optimize                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;

int main()
{
    optimize int t;
    cin >> t;
    int n, k, c;
    while (t--)
    {
        cin >> n >> k;
        vll arr(n + 1), temp(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
            temp[arr[i]] = i;
        }

        c = 0;
        vector<tuple<int, int, int>> ans;
        bool valid = true;
        for (int i = 1; i <= n; i++)
        {
            if (i != arr[i])
            {
                pair<int, int> l, m, z;
                l = make_pair(i, temp[i]);
                m = make_pair(arr[i], i);
                z = make_pair(arr[arr[i]], arr[i]);
                if (l.first == z.first)
                    continue;
                ans.push_back({m.second, z.second, l.second});
                arr[l.second] = z.first;
                temp[z.first] = l.second;
                arr[z.second] = m.first;
                temp[m.first] = z.second;
                arr[i] = i;
                temp[i] = i;
                ++c;
            }
        }

        for (int i = 1; i <= n; i++)
        {
            if (i != arr[i])
            {
                pair<int, int> l, m, z;
                l = make_pair(i, temp[i]);
                m = make_pair(arr[i], i);
                z = make_pair(arr[arr[i]], arr[i]);
                if (l.first == z.first)
                {   
                    int j = n + 1;
                    for( j = i + 1; j <= n; ++j) {
                        if(j != arr[j] && j != arr[i])
                         break;
                    }
                    if(j == n+1) {
                        valid = false;
                        break;
                    }
                    z = {j, temp[j]};
                }
                ans.push_back({m.second, z.second, l.second});
                arr[l.second] = z.first;
                temp[z.first] = l.second;
                arr[z.second] = m.first;
                temp[m.first] = z.second;
                arr[i] = i;
                temp[i] = i;
                ++c;
            }
        }

        if (c > k || !valid)
            cout << -1 << '\n';
        else
        {
            cout << ans.size() << '\n';
            for (auto i : ans)
                cout << get<0>(i) << ' ' << get<1>(i) << ' ' << get<2>(i) << '\n';
        }
    }
    return 0;
}