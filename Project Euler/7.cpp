#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;
const int mex = 1e6 + 5;
vector<int> prime;
int dp[mex];

void precompute() {
    for(int i = 2; i < mex; i++) {
        if(dp[i] == 0) {
            prime.push_back(i);
            dp[i] = i;
        }
        for(int j = 0; j <(int)prime.size() and prime[j] * i < mex and prime[j] <= dp[i]; j++) {
            dp[prime[j] * i] = prime[j];
        }   
    }
}

int main()
{
	FIO;
    precompute();
	cout << prime[10001-1] << '\n';
	return 0;
}