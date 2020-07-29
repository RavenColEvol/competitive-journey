#include<bits/stdc++.h>
#define test(t) for(cin>>t;t;--t)
#define rep(i,n) for(ll i=0;i<n;i++)
#define repr(i,k,n) for(ll i=k;i<n;i++)
#define repr_r(i,n) for(ll i=n-1;i>=0;i--)
#define mp make_pair
#define pb push_back
#define f first
#define sec second
#define in cin>>
#define out cout<<
#define endl '\n'
#define optimize ios_base::sync_with_stdio(0);cin.tie(NULL);
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll,ll>pll;


ll t, n, q;
string s;
bool f;

struct trie{ 
    trie* c[26];
    trie() {
        for(int i = 0; i < 26; i++) c[i] = nullptr;
    }
    bool end = true;
}* root = new trie();

map<string, int> smp;

void insert(string s) {
    trie* p = root;

    for(char c : s) {
        int i = c - 'a';
        if(!p->c[i]) {
            p->c[i] = new trie();
            p->end = false;
        }
        p = p->c[i];
    }
}

void query(int x = 0,int e = 1, trie* at = root, string ans = "", bool re = false) {
    if(re  && e >= 0) {
        cout << ans << '\n';
    }

    if(e >= 0 && at)  {
        for(int i = 0; i < 26; i++) {
            if(at->c[i]) {
                if(char(i + 'a') == s[x]) {
                    query(x+1, e, at->c[i], ans + char(i + 'a'), at->c[i]->end);
                }else {
                    query(x+1, e-1, at->c[i], ans + char(i + 'a'), at->c[i]->end);
                    query(x, e-1, at->c[i], ans + char(i + 'a'), at->c[i]->end);
                }
            }
        }
    }
}

int main(){
	optimize

    cin >> t;
    while(t--) {
        root = new trie();
        cin >> n >> q;
        for(int i = 0; i < n; i++) {
            cin >> s;
            smp[s] = 1;
            insert(s);
        }
        for(int i = 0; i < q; i++) {
            cin >> s;
            if(smp.find(s) != smp.end()) {
                cout << s << '\n';
            }else {
                f = true;
                query();
            }
        }
    }    
	return 0;
}