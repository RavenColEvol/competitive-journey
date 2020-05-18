#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;

int main()
{
	FIO;
    int t, a, b; cin >> t;
    while(t--) {
        cin >> a >> b ;
        cout << fixed;
        cout << setprecision(7) << (float)(a + b - 1) << '\n';
    }
	return 0;
}