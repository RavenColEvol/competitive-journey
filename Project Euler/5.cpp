#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;

long lcm(long a, long b) {
    return (a * b) / __gcd(a, b);
}

int main()
{
	FIO;
	long ans = 1;
    for(long i = 1; i <= 20; i++) {
        ans = lcm(ans, i);
    }
    cout << ans << '\n';
	return 0;
}