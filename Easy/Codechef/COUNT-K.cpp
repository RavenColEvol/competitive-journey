#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;

const int mex = 1e5 + 1;

int dp[mex] = {0}, a[5][mex] = {0};

void precompute() {
    for(int i = 2; i < mex; i += 2) dp[i] = 1;
    for(int i = 3; i < mex; i += 2) {
        if(dp[i] == 0) {
            dp[i] = 1;
            for(int j = i + i; j < mex; j += i)
                dp[j]++;
        }
    }

    for(int i = 2; i < mex; i++) {
        for(int j = 0; j < 5; j++) {
            if(dp[i] == j+1){
                a[j][i] = a[j][i-1] + 1;
            }
            else a[j][i] = a[j][i-1];
        }
    }
}

int main()
{
	FIO;
    precompute();
    int t; cin >> t;
    while(t--) {
        int x, y, k;
        cin >> x >> y >> k;
        cout << a[k-1][y] - a[k-1][x-1] << '\n';
    }
	return 0;
}