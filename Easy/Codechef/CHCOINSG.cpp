#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;

int main()
{
	FIO;
	int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        if(n % 6 == 0) cout << "Misha\n";
        else cout << "Chef\n";
    }
	return 0;
}