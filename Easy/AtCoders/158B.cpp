#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, a, b;
    cin >> n >> a >> b;
    long long count = n / (a+b);
    long long remainder = n % (a+b);
    long long ans = a * count;
    if(remainder < a) ans += remainder;
    else ans += a;
    cout << ans;
    return 0;
}