#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;
typedef long long ll;

ll t, n, pos;
bool a[1005];
bool is_safe, flag;

int main()
{
	FIO;
	cin >> t; 
    while(t--) {
        is_safe = true, flag = false;
        cin >> n;
        for(ll i = 0; i < n; i++) cin >> a[i];

        pos = -1;
        for(ll i = 0; i < n; i++) {
            if(a[i] == 1 && pos == -1) pos = i;
            else if(a[i] == 1) {
                is_safe = (i - pos) > 5;
                pos = i;
                if(!is_safe) {
                    flag = true;
                    break;
                }
            }
        }
        if(flag) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
	return 0;
}