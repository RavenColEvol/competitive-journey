#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;

ll t, x, n, f;

int main()
{
	FIO;
	cin >> t;
    while(t--) {
        cin >> x >> n;
        f = 0;
        
        while(x % 2 == 0) x /= 2, ++f;
        
        for(ll i = 3; i*i <= x ; i+=2) {
           
            while(x % i == 0) x /= i, ++f;
            
        }

        if(x > 1) {
            f++;
        }

        cout << (f >= n) << '\n';
    }
	return 0;
}