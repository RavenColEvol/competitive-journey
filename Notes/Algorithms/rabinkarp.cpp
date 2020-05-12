#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;

int main()
{
	FIO;
	string s = "abcdefg", p = "bade";
    int hash = 0, shash = 0;
    for(int i = 0; i < p.size(); i++) {
        hash += p[i]*pow(31, i);
        shash += s[i]*pow(31, i);
    }

    for(int i = p.size(); i < s.size(); i++) {
        if(hash == shash) {
            cout << "found" << '\n';
            break;
        }
        shash -= s[i - p.size()];
        shash /= 31;
        shash += s[i] * pow(31,p.size()-1);
    }
	return 0;
}