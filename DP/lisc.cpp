#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;

int lis(vector<int> a, int n, int pi) {
    if(n == 0) return 0;
    cout << n << ' ' << pi << '\n';
    int ex = lis(a, n-1, pi);
    int in = 0;
    if(a[pi - 1] > a[n-1] and (pi - n) == (a[pi-1] - a[n-1]))
        in = a[pi-1] + lis(a, n - 1, n);
    int bk = lis(a, n-1, n);
    
    return max({in, ex, bk});
}

int main()
{
	FIO;
	int n; cin >> n;
    vector<int> a(n);
    for(int& i : a) cin >> i;
    a.push_back(INT_MAX);
    cout << lis(a, n - 1, n);

	return 0;
}