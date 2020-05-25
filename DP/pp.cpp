#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;

bool ispalin(string s, int i, int j) {
    for(; i < j; i++, j--)
        if(s[i] != s[j]) return false;

    return true;
}

int solve(string s, int i, int j) {
    if(i >= j) return 0;
    
    if(ispalin(s, i, j)) return 0;

    int ans = INT_MAX, temp;
    for(int k = i; k < j; k++) {
        temp = solve(s, i, k) + solve(s, k+1, j) + 1;
        ans = min(ans, temp);
    }

    return ans;
}

int main()
{
	FIO;
	string s = "abc";
    int n = s.size();
    cout << solve(s, 0, n-1);
	return 0;
}