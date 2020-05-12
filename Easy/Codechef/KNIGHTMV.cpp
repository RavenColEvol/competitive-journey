#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;

bool iscorrect(string s)
{
    if (s[2] != '-')
        return false;
    if (isdigit(s[1]) == false || isdigit(s[4]) == false || s[1] == '0' || s[4] == '0' || s[1] > '8' || s[4] > '8')
        return false;
    return isalpha(s[0]) && isalpha(s[3]) && s[0] < 'i' && s[3] < 'i';
}

bool isright(string s)
{
    bool x = false, y = false;
    for (int i : {-2, 2})
    {
        if (s[0] + i == s[3] && isalpha(s[0] + i))
        {
            for (int i : {-1, 1})
            {
                if (s[1] + i == s[4] && isdigit(s[1] + i))
                {
                    return true;
                }
            }
        }
    }
    for (int i : {-2, 2})
    {
        if (s[1] + i == s[4] && isdigit(s[1] + i))
        {
            for (int i : {-1, 1})
            {
                if (s[0] + i == s[3] && isalpha(s[0] + i))
                {
                    return true;
                }
            }
        }
    }
    return false;
}

int main()
{
    FIO;
    ll t;
    cin >> t;
    string s;
    getline(cin, s);
    while (t--)
    {
        getline(cin, s);
        if (iscorrect(s))
        {
            if (isright(s))
                cout << "Yes\n";
            else
                cout << "No\n";
        }
        else
            cout << "Error\n";
    }
    return 0;
}