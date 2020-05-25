#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;

int main()
{
	FIO;
	long long n = 600851475143;
    int ans = 2;
    while(n&1 == 0) n /= 2;
    for(int i = 3; i * i <= n; i += 2) {
        if(n % i == 0) {
            while(n % i == 0) {
                n /= i;
            }
            ans = i;
        }
    }
    if(n > 1) ans = n;
    cout << ans << '\n';
	return 0;
}