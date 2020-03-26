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
bool onSegment(pll p, pll q, pll r) 
{ 
    if (q.f <= max(p.f, r.f) && q.f >= min(p.f, r.f) && 
        q.sec <= max(p.sec, r.sec) && q.sec >= min(p.sec, r.sec)) 
       return true; 
    return false; 
}

int orientation(pll p, pll q, pll r) 
{  
    int val = (q.sec - p.sec) * (r.f - q.f) - 
              (q.f - p.f) * (r.sec - q.sec); 
  
    if (val == 0) return 0;  
    return (val > 0)? 1: 2;
} 

bool doIntersect(pll p1, pll q1, pll p2, pll q2) 
{
    int o1 = orientation(p1, q1, p2); 
    int o2 = orientation(p1, q1, q2); 
    int o3 = orientation(p2, q2, p1); 
    int o4 = orientation(p2, q2, q1); 
    if (o1 != o2 && o3 != o4) 
        return true;
	if (o1 == 0 && onSegment(p1, p2, q1)) return true; 
    if (o2 == 0 && onSegment(p1, q2, q1)) return true; 
    if (o3 == 0 && onSegment(p2, p1, q2)) return true; 
    if (o4 == 0 && onSegment(p2, q1, q2)) return true;
    return false; 
} 

int main(){
	optimize
	ll t, n, q, a, b, y, count;
	test(t) {
		cin >> n >> q;
		vector<pll> arr(n);
		rep(i,n) {
			arr[i].f = i+1;
			cin >> arr[i].sec;
		}
		rep(i,q) {
			count = 0;
			cin >> a >> b >> y;
			pll l,m;
			l.f = a, l.sec = y;
			m.f = b, m.sec = y;

			repr(i,l.f,m.f) {
				if(doIntersect(l,m,arr[i-1],arr[i])){
					count++;
				}
			}
			cout << count << '\n';
		}

	}
	return 0;
}