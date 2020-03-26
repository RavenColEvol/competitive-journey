#include<bits/stdc++.h>
using namespace std;

int n, m;

int main ()
{
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        string s; cin >> s;
        for(int j = 0; j < m; j++) {
            if(s[j] == '.') {
                cout << ((i+j)&1 ? 'B' : 'W');
            }
            else cout << '-';
        }
        cout << '\n';
    }
    return 0;
}