#include<bits/stdc++.h>
#define test(t) for(cin>>t;t;--t)
#define rep(i,n) for(ll i=0;i<n;i++)
#define repr(i,k,n) for(ll i=k;i<n;i++)
#define repr_r(i,n) for(ll i=n-1;i>=0;i--)
#define pb push_back
#define f first
#define sec second
#define in cin>>
#define out cout<<
#define optimize ios_base::sync_with_stdio(0);cin.tie(NULL);
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll,ll>pll;

bool is_leap(ll year) {
	if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
                return true;
            else
                return false;
        }
        else
           	return true;
    }
    return false;
}

int overlap(ll d, ll m,ll y) {
	static int t[] = { 0, 3, 2, 5, 0, 3, 
                       5, 1, 4, 6, 2, 4 };  
    y -= m < 3;  
    return ( y + y / 4 - y / 100 +  
             y / 400 + t[m - 1] + d) % 7;  
}

int main(){
	optimize
	ll t = 0;
	test(t) {
		ll m[2], y[2], count = 0, k;
		cin >> m[0] >> y[0] >> m[1] >> y[1];
		k = (y[1] - y[0]) / 400;
		count = k * 101;
		y[0] += k *400;
		for(ll start = y[0]; start <= y[1]; start++) {
			if(is_leap(start)) {
				if(overlap(1,2,start) == 6) count++;
			}
			else if(overlap(1,2,start) == 6 || overlap(1,2,start) == 0) count++;
		}
		if(m[0] > 2) {
			if(is_leap(y[0])) {
				if(overlap(1,2,y[0]) == 6) count--;
			}
			else if(overlap(1,2,y[0]) == 6 || overlap(1,2,y[0]) == 0) count--;
		}
		if(m[1] < 2) {
			if(is_leap(y[1])) {
				if(overlap(1,2,y[1]) == 6) count--;
			}
			else if(overlap(1,2,y[1]) == 6 || overlap(1,2,y[1]) == 0) count--;
		}
		cout << count << endl;
	}
	return 0;
}