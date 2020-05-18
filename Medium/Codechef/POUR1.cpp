#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;

int main()
{
	FIO;
	int t, a, b, c; cin >> t;
    while(t--) {
        cin >> a >> b >> c;
        if(a == c || b == c) {
            cout << 1 << '\n';
        }
        else if( abs(a-b) == c ) cout << 2 << '\n';
        else cout << "-1\n";
    }
	return 0;
}