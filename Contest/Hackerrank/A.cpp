#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define rep(i, a, b) for(ll i = a; i < b; ++i)
using namespace std;
typedef long long ll;
typedef vector<ll> vll;

ll mx = 2501;

int kmx[] = {-2, -2, -1, -1, 1, 1, 2, 2};
int kmy[] = {-1, 1, -2, 2, -2, 2, -1, 1};
ll t, n;

bool vm(int x, int y) {
    if(x < 0 || y < 0 || x >= n || y >= n) return false;
    return true;
}

bool capture(int px, int py, int kx, int ky) {
    if(py >= n) return false;
    if(px == kx && py == ky) return true;
    py++;
    for(int i = 0; i < 8; i++) {
        if(vm(kx + kmx[i], ky + kmy[i])) {
            if(capture(px, py , kx + kmx[i], ky + kmy[i]))
                return true;
        }
    }
    return false;
}

int main()
{
	FIO;
    t, n; cin >> t;
    while(t--) {
        cin >> n;
        int px, py, kx, ky;
        cin >> kx >> ky >> px >> py;
        cout << capture(px, py, kx, ky) << '\n';
    }
	return 0;
}


/*

bool capture(int px, int py, int kx, int ky) {
    queue<point> Q; 
    Q.push(point(kx, ky, py++));
    
    while(!Q.empty()) {
        point top = Q.front(); Q.pop();
        if(top.py == n) return false;
        if(px == top.kx && top.py == top.ky) return true;
        for(int i = 0; i < 8; i++) {
            int X = top.kx + kmx[i], Y = top.ky + kmy[i];
            if(px == top.kx && top.py == top.ky) return true;
            if(vm(X, Y)) {
                Q.push(point(X, Y, top.py + 1));
            }
        }
    }
    return false;
}
*/