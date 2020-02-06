#include<bits/stdc++.h>
using namespace std;

int main()
{
	int l, m, n, k, ans = 0, total_capacity ;
	cin >> l >> m >> n >> k;
	if(k == 1) {
		cout << l+m+n << endl;
	}
	else {
		ans += l;
		total_capacity = (k-1)*l;
		if(total_capacity % 2 == 0) {
			m -= total_capacity /2;
			n -= total_capacity /2;
		}
		else {
			if(m > n){
				m -= total_capacity /2 + 1;
				n -= total_capacity /2;
			}
			else {
				m -= total_capacity /2 ;
				n -= total_capacity /2 + 1;
			}
		}
		if( m == n) {
			ans += n/(k/2) ;
			n -= (n/(k/2))*(k/2);
			ans += (n%2==0?0:1);
		}
		else if( m > n) {
			ans += n/(k/2);
			m -= n/(k/2) ;
			ans += m;
		}
		else {
			ans += m/(k/2);
			n -= m/(k/2) ;
			ans += n;
		}
		cout << ans << endl;
	}
	
	return 0;
}