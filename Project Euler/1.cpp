#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;

int main()
{
	FIO;
	int ans = 0, bf = 0, c3(0), c5(0);
    ans = ((999 + 3)*333)/2;
    ans += ((995 + 5)*199)/2;
    ans -= ((990 + 15)*66)/2;
    cout << ans << '\n';
	return 0;
}