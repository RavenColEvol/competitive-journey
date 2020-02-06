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

int main(){
	optimize
	ll t;
	test(t) {
		string path = "";
		ll n; in n;
		vector<pair<int, int>> points(n);
		pair<int,int> current_point = {0,0};

		for(auto& i : points) cin >> i.first >> i.second;
		sort(points.begin(), points.end(), [](auto x, auto y){
			return x.first < y.first ? true : x.second < y.second;
		});
		bool flag = true;

		for(auto i : points) {

			if(i.first < current_point.first || i.second < current_point.second)
			{
				flag = false;
			}
			else {
				rep(j,i.first - current_point.first) path+='R';
				rep(j,i.second - current_point.second) path += 'U';
				current_point = {i.first, i.second};
			}
		}
		if(flag) {
			out "YES\n";
			out path;
			out '\n';
		}
		else
			out "NO\n";

	}
	return 0;
}