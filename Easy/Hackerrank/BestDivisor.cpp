#include <bits/stdc++.h>

using namespace std;

int ans ;
int dp[100007];

int digits_sum(int n) {
    int sum = 0;
    while(n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        if(n % i == 0){
            if( dp[ digits_sum(i) ] ) {
                continue;
            }
            else {
                dp[ digits_sum(i) ] = digits_sum(i);
            }
        }
    }
    ans = 0;
    for(int i = 1; i <= n; i++) {
        if(dp[i]) {
            if(digits_sum(ans) < digits_sum(dp[i])) {
                ans = dp[i];
            }
        }
    }
    cout << ans << endl;
    return 0;
}