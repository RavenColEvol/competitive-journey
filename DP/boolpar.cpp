#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;

int solve(string exp, int i, int j) {

    if(i == j) {
        if(exp[i] == 'T') return true;
        return false;
    }
    int ans = 0;
    for(int k = i + 1; k <= j-1; k+=2) {
        bool eval;
        if(exp[k] == '&') eval = solve(exp, i, k-1) & solve(exp, k+1, j);
        else if(exp[k] == '|') eval = solve(exp, i, k-1) | solve(exp, k+1, j);
        else eval = solve(exp, i, k-1) ^ solve(exp, k+1, j);

        ans += eval;
    }
    return ans;
}

int main()
{
	FIO;
	string exp = "T|T&F^T";
    int n = exp.size();
    cout << solve(exp, 0, n-1) << '\n';
	return 0;
}