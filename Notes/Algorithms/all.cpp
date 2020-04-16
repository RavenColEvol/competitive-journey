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

void helper(vll a, vll permutations, ll idx) {
    if(idx == a.size()) {
        for(ll i : permutations) cout << i << ' ';
        cout << endl;
    }

    for(ll i = idx; i < a.size(); i++) {
        permutations.pb(a[i]);
        helper(a, permutations, idx + 1);
        permutations.pop_back();
        helper(a, permutations, idx + 1);
    }

}

void generate(vll a) {
    vll permutations;
    helper(a, permutations, 0);
}

void setup() {
	optimize
	/*
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	*/
}

int main(){
	setup();
	vll a = {1,2,3};
    generate(a);
	return 0;
}