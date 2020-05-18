#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;

int main()
{
	FIO;
	int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        int n = s.length();
        for(int i = n - 4; i >= 0; --i) {
            if(s[i] == 'C' || s[i] == '?')
                if(s[i + 1] == 'H' || s[i + 1] == '?')
                    if(s[i + 2] == 'E' || s[i + 2] == '?')
                        if(s[i + 3] == 'F' || s[i + 3] == '?')
                            s[i] = 'C', s[i+1] = 'H', s[i+2] = 'E', s[i+3] = 'F';
        }
        for(char& i : s) {
            if(i == '?') i = 'A';
        }
        cout << s << '\n';
    }
	return 0;
}