#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;

int main()
{
	FIO;
	int t, i, j, a, b, len; cin >> t;
    string s;

    while(t--) {
        cin >> s;
        a = b = 0;
        len = s.size();
        for(i = 0; i < len; ++i) {
            if(!(i&1) && s[i] == '+') a++;
            if( i&1 && s[i] == '-') a++;

            if(!(i&1) && s[i] == '-') b++;
            if( i&1 && s[i] == '+') b++;
        }
        cout << min(a, b) << '\n';
    }
	return 0;
}