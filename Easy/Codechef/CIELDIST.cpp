#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;

int main()
{
	FIO;
	ll t; cin >> t;
    while(t--)
    {
        double arr[3];
        cin >> arr[0] >> arr[1] >> arr[2];
        sort(arr, arr + 3);
        cout << fixed << setprecision(6) << max(0.0, arr[2] - arr[0] - arr[1]) << '\n';
    }
	return 0;
}