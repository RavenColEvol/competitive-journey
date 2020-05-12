#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;

int main()
{
	FIO;
	ll n, mx = 0, mi = 0, m; cin >> n;
    string a, b, c; cin >> a >> b;
    c = a + '$' + b + b;
    m = c.size();
    vector<int> lps(m);
    lps[0] = -1;
    ll i = 0, j = -1;

    while(i < m) {
        while(j >= 0 && c[i] != c[j]) j = lps[j];
        j++, i++;
        lps[i] = j;
    }

    for(int i = n + 1; i < m; i++) {
        if(lps[i] > mx) mx = lps[i], mi = i;
    }

    cout << mi  - n - mx - 1<< '\n'; 
	return 0;
}