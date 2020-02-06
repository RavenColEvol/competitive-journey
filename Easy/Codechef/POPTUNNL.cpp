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

int minJumps(vector<string>& arr, vector<bool>& visited, ll& curr_position, ll& len, ll jumps) {
	if(curr_position == len)
		return jumps

	if(visited[curr_position] == false) {
		visited[curr_position] = true;
		for(ll i = curr_position; curr_position < len && i < k + curr_position; i++) {
			
		}
	}
	else {
		return -1;
	}
}

int main(){
	optimize
	ll t;
	test(t){
		ll n,k; cin >> n >> k;
		vector<string> arr(n);
		for(string& i : arr) in i;
		ll jumps = 0;
		bool visited(n, 0);

		if(arr[0][0] == '0')
			cout << -1;
		else {
			ll curr = 0;
			visited[0] = 1;
		}
		

		// for(ll i = 0; arr[curr][i] != '\n'; i++) {
		// 	ll temp = i;
		// 	if(visited[i+1])
		// 	for(ll j = i+1; j < k && j < n; j++)
		// 	{
		// 		if(arr[curr][j] == '1' && visited[j] == 0)
		// 			temp = j;
		// 	}
		// 	if(temp != i) {
		// 		curr = j;
		// 		jumps++;
		// 		visited[j] = 1;
		// 	}
		// 	else {
		// 		for(ll j = i-1; j >= 0 ; j--)
		// 			if(arr[curr][j] == '1')
		// 			{
		// 				curr = j;
		// 				if(visited[j] == true){
		// 					cout << -1;
		// 					break;
		// 				}
		// 			}
		// 	}
		// }

	}
	return 0;
}