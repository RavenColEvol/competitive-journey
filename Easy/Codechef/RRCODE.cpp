#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;

int main()
{
	FIO;
	int t, a, b, c, i, j, k;
    int arr[1001];
    string s;
    cin >> t;
    while(t--) {
        cin >> a >> b >> c;
        for(i = 0; i < a; i++) cin >> arr[i];
        cin >> s;
        if(b > 0) {
            if(s == "OR") {
                for(int i = 0; i < a; i++) c |= arr[i];
            }
            else if(s == "AND") {
                for(int i = 0; i < a; i++) c &= arr[i];
            }
            else if(b&1)
                for(int i = 0; i < a; i++) c ^= arr[i];
        }
        cout << c << '\n';
    }
	return 0;
}