#include<bits/stdc++.h>
#define test(t) for(cin>>t;t;--t)
#define rep(i,n) for(ll i=0;i<n;i++)
#define repr(i,k,n) for(ll i=k;i<n;i++)
#define repr_r(i,n) for(ll i=n-1;i>=0;i--)
#define mp make_pair
#define pb push_back
#define f first
#define sec second
#define in cin>>
#define out cout<<
#define endl '\n'
#define optimize ios_base::sync_with_stdio(0);cin.tie(NULL);
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll,ll>pll;

int main(){
	optimize
    ll n, cnt = 0; cin >> n;
    string b, g;
    cin >> b >> g;
    ll arr[2] = {0};
    for(char c : g) {
        if(c == 'r') arr[0]++;
        else arr[1]++;
    }
    for(char c : b) {
        if(c == 'r') {
            if(arr[0])
                arr[0]--;
            else break;
        } 
        else {
            if(arr[1])
                arr[1]--;
            else break;
        }
        cnt++;
    }
    cout << (ll)g.size() - cnt ;
	return 0;
}