#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;

const int mex = 1e4 + 1;
int t, n, q, c, x, y, s[mex], a[mex];

int parent(int x) {
    if(x == a[x]) return x;

    return a[x] = parent(a[x]);
}

void join(int x, int y) {
    x = parent(x);
    y = parent(y);

    if(x != y) {
        if(s[x] > s[y]) a[y] = x;
        else if(s[x] < s[y]) a[x] = y;
    }
}

int main()
{
	FIO;
    cin >> t;
    while(t--) {
        cin >> n;
        for(int i = 1; i <= n; i++)  cin >> s[i], a[i] = i;
        cin >> q;
        while(q--) {
            cin >> c;
            if(c == 0) {
                cin >> x >> y;
                if(parent(x) == parent(y)) cout << "Invalid query!\n";
                else join(x, y);
            } else {
                cin >> x;
                cout << parent(x) << '\n';
            }
        }
    }
	return 0;
}