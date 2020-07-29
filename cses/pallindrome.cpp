#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define rep(i, a, b) for(ll i = a; i < b; ++i)
#define repr(i, a, b) for(ll i = a; i >= b; --i)
#define in cin >>
#define out cout <<
using namespace std;
typedef long long ll;
typedef vector<ll> vll;

int main()
{
	FIO;
    string s;
    in s;
    int arr[26] = {0};
    for(char c : s) {
        arr[c - 'A']++;
    }
    int oc = 0;
    for(int i : arr) {
        if(i&1) oc++;
    }

    if(oc > 1) out "NO SOLUTION\n";
    else {
        rep(i, 0, 26) {
            if(!(arr[i]&1)) {
                rep(j, 0, arr[i]/2) {
                    cout << char(i + 'A');
                }
            }
        }
        rep(i, 0, 26) {
            if(arr[i]&1) {
                rep(j, 0, arr[i]) 
                    cout << char(i + 'A');
            }
        }
        repr(i, 25, 0) {
            if(!(arr[i]&1)) {
                rep(j, 0, arr[i]/2) {
                    cout << char(i + 'A');
                }
            }
        }
    }

	return 0;
}