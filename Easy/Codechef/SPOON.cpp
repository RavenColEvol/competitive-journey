#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;

auto solve = [](){
    ll r, c; cin >> r >> c;
    vector< vector<char> > inp(r, vector<char>(c));
    
    char tmp;
    for(ll i = 0; i < r; i++) 
        for(ll j = 0; j < c; j++)
            cin >> tmp, inp[i][j] = tolower(tmp);

    string row = "", col = "";

    for(ll i = 0; i < r; i++)
        for(ll j = 0; j < c; j++)
            row += inp[i][j];
    
    for(ll i = 0; i < c; i++) 
        for(ll j = 0; j < r; j++)
            col += inp[j][i];

    bool found = row.find("spoon") != string::npos || col.find("spoon") != string::npos;

    if(found) cout << "There is a spoon!\n";
    else cout << "There is indeed no spoon!\n";
};


int main()
{
	FIO;
	ll t; cin >> t;
    while(t--)
    {
        solve();
    }
	return 0;
}