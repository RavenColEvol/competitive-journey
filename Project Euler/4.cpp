#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;

bool ip(int n) {
    int temp = n, v(0), pow(1);
    while(temp) {
        v = v * 10 + (temp % 10);
        temp /= 10;
    }
    return n == v;
}

int main()
{
	FIO;
	int a = 999, b = 999, ans = 0;
    for(int i = 999; i >= 100; i--) {
        for(int j = 999; j >= 100; j--) {
            if(ip(i*j)) {
                ans = max(ans, i*j);
            }
        }
    }
    cout << ans << '\n';
	return 0;
}