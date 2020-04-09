#include<bits/stdc++.h>
using namespace std;

string x = "ABAABCXABCXABXA", pattern = "ABC";
vector<int> reset(pattern.size());

void compute() {
    int j = -1, i = 0;

    reset[0] = -1;

    while(i < pattern.size()) {
        while( j >= 0 && pattern[i] != pattern[j]) j = reset[j];
        ++i, ++j;
        reset[i] = j;
    }
}

int solve() {
    int i = 0, j = 0;

    while(i < x.size()){
        while(j >= 0 && x[i] != pattern[j]) j = reset[j];
        i++, j++;
        if(j == pattern.size()) cout << i - j << endl;
    }
}

int main()
{
    compute();
    for(int i : reset) cout << i << ' ';
    cout << endl;
    solve();
    return 0;
}