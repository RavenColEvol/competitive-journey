#include<bits/stdc++.h>
using namespace std;

string x = "ABAABCXABCXABXA", pattern = "ABC";
string z = pattern + "$" + x;
vector<int> reset(pattern.size() + x.size() + 1, 0);

void compute() {
    int i = pattern.size(), j = 0, k = pattern.size();
    while(i < z.size()) {
        while(k < z.size() && z[j] == z[k]) {
            k++, j++;
        }
        reset[i] = k - i;
        k = i;
        k++,i++,j=0;
    }
}

int main()
{
    compute();
    for(int i : reset) {
        cout << i << ' ';
    }
    cout << endl;
    for(int i = 0 ; i < reset.size() ; i++) {
        if(reset[i] == pattern.size()) {
            cout << i - pattern.size() - 1 << endl; 
        }
    }
    return 0;
}