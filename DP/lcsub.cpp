#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a="abbab", b="bbaba";
    vector<int> dp(max(a.size(), b.size()));
    for(int i = 0; i < a.size(); i++) {
        for(int j = 0; j < b.size(); j++)
        {
            if(a[i]==b[j])
                dp[i] = max(dp[j], dp[j-1] + 1);
        }
    }

    cout << *max_element(dp.begin(), dp.end()) << '\n';
    return 0;
}