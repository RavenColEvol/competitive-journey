#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;

int main()
{
	FIO;
	int t, n; cin >> t;
    while(t--) {
        cin >> n;
        multiset<int> ms;
        
        for(int j = 0; j < (1<<n); j++) {
            int temp; cin >> temp;
            if(temp) ms.insert(temp);
        }

        vector<int> v;
        while(!ms.empty()) {
            auto itr = ms.begin();
            int val = *itr;

            cout << val << ' ';
            
            int len = v.size();
            for(int i = 0; i < len; i++) {
                auto f = ms.find(val + v[i]);
                ms.erase(f);
                v.push_back(v[i] + val);
            }
            v.push_back(val);
            ms.erase(itr);
        }
        cout << '\n';
    }
	//cerr << "\nTime elapsed: " << 1000 * clock() / CLOCKS_PER_SEC << "ms\n";
	return 0;
}