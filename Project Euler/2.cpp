#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;
const int mex = 4e6;
int main()
{
	FIO;
	int n = 20;
    int a = 0, b = 2, c, sum = 2;
    while(sum <= mex) {
        c = 4 * b + a;
        sum += c;
        a = b;
        b = c;
    }
    cout << sum << '\n';
	return 0;
}