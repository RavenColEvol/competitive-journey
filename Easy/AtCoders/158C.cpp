#include<bits/stdc++.h>
#define flashio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;
int main()
{
	flashio;
	int a, b;
    cin >> a >> b;
    for(int i = 1; i <= 1000; i++) {
        if(a == floor(i*0.08) && b == floor(i*0.1)) {
            cout << i ;
            return 0;
        }
    }
	cout << -1;
	return 0;
}