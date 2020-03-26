#include<bits/stdc++.h>
using namespace std;

string dp[10] = {"","","2","3","322","5","35","7","7222","7332"};

int main()
{
    int n;
    string t;
    cin >> n >> t;
    string output = "";
    for(char c : t) output += dp[c-'0'];
    sort(output.begin(), output.end(), greater<char>());
    cout << output << '\n';
    return 0;
}