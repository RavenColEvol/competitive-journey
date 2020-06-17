#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;

int t, a, b, c, x, y, ans = 1;

int pour(int a, int b, int c) {
    int m = 1, x = a, y = 0, trf;
    while(x != c || y != c) {
        
    }
}

int main()
{
	FIO;
	cin >> t;
    while(t--) {
        cin >> a >> b >> c;
        if(a > b) swap(a, b);
        if(c > max(a, b) || c % __gcd(a, b) != 0) cout << "-1\n";
        else {
            cout << min(pour(a, b, c), pour(b, a, c)) << '\n';
        } 
    }
	return 0;
}