#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, result = 0, temp, prev = -1; cin >> n;
    for(long long i = 0; i < n; i++) {
        cin >> temp;
        if(temp == 1) {
            if(prev == -1) result = 1;
            else result *= (i - prev );
            prev = i;
        }
    }
    cout << result << endl;
    return 0;
}