#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;

int g(char x) {
    return x - 'a' + 1;
}

int h(char x) {
    return x - '0'; 
}

bool not_correct(string s) {
    if(s.size() != 5) return true;
    if(s[2] != '-') return true;
    for(int i : {0, 3})
        if(g(s[i]) > 8 || g(s[i]) < 1) return true;
    for(int i : {1, 4})
        if(h(s[i]) > 8 || h(s[i]) < 1) return true;
    return false;
}

bool correct_move(string s) {
    int d = abs(s[0] - s[3]);
    int x = abs(s[1] - s[4]);
    if((x == 1 && d == 2) || (x == 2 && d == 1)) return true;
    return false;
}

int main()
{
    FIO;
    ll t;
    cin >> t;
    cin.get();

    while(t--) {
        string s;
        getline(cin, s);
        
        if(not_correct(s)) cout << "Error\n";
        else {
            if(correct_move(s)) {
                cout << "Yes\n";
            } else cout << "No\n";
        }
    }
    return 0;
}