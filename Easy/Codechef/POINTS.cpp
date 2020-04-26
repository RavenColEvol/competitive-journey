#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;

double dis(pair<int,int> x, pair<int,int> y) {
    return sqrt((x.first-y.first)*(x.first-y.first) + (x.second-y.second)*(x.second-y.second));
}

int main()
{
	FIO;
	ll t, n; cin >> t;
    while(t--) {
        cin >> n;
        vector<pair<int,int>> arr(n);
        for(auto& i : arr) cin >> i.first >> i.second;

        sort(arr.begin(), arr.end(), [](auto a, auto b) {
            if(a.first == b.first) return a.second > b.second;
            return a.first < b.first;
        });

        double ans = 0;
        for(ll i = 1; i < n; i++) ans += dis(arr[i-1], arr[i]);

        cout << fixed <<  std::setprecision(2) << ans << '\n';
    }
	return 0;
}