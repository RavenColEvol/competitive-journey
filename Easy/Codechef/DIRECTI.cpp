#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;

int main()
{
	int t, n;
    string s, line;
    cin >> t;
    while(t--) {
        cin >> n;
        // to consume \n after n
        vector<string> dir(n), road(n);
        getline(cin, line);
        for(int i = 0; i < n; i++) {
            cin >> dir[i];
            getline(cin, road[i]);
        }

        for(int i = 0; i < n; i++) {
            if(i == 0) cout << "Begin";
            else if(dir[n - i] == "Left") cout << "Right";
            else cout << "Left";
            cout << road[n-i-1] << '\n';
        }

    }
	return 0;
}