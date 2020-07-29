#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define rep(i, a, b) for(ll i = a; i < b; ++i)
using namespace std;
typedef long long ll;
typedef vector<ll> vll;

int main()
{
	FIO;
    vll arr = {1, 3, 2, 4};
    stack<ll> stk;
    vll ans;
    for(ll i = arr.size() - 1; i >= 0; i--) {
        while(1) {
            if(stk.empty()) {
                ans.push_back(-1);
                stk.push(arr[i]);
                break;
            } 
            else if(stk.top() > arr[i]) {
                ans.push_back(stk.top());
                stk.push(arr[i]);
                break;
            }
            stk.pop();
        }
    }
    reverse(ans.begin(), ans.end());
    for(ll i : ans) cout << i << ' ';
	return 0;
}