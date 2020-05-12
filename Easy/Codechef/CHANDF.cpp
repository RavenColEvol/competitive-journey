#include <bits/stdc++.h>
#define test(t) for (cin >> t; t; --t)
#define rep(i, n) for (ll i = 0; i < n; i++)
#define repr(i, k, n) for (ll i = k; i < n; i++)
#define repr_r(i, n) for (ll i = n - 1; i >= 0; i--)
#define mp make_pair
#define pb push_back
#define f first
#define sec second
#define in cin >>
#define out cout <<
#define endl '\n'
#define optimize                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);
using namespace std;
typedef unsigned long long ll;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;

ll t, x, y, l, r;

ll bruteforce(bitset<64> a)
{
    ll mi = 0, mv = 0;
    for (ll i = a.to_ullong(); i <= r; i++)
    {
        ll v = (i & x) * (i & y);
        if (v > mv)
            mv = v, mi = i;
    }
    cout << mi << '\n';
}

ll msb(ll val)
{
    return log2(val);
}

int main()
{
    optimize
        test(t)
    {
        cin >> x >> y >> l >> r;
        if (x < y)
            swap(x, y);
        bitset<64> a(x & y), b(x | y), temp(0ULL), bx(x), by(y);

        if (x == 0 || y == 0)
            cout << "0\n";

        else if (b.to_ullong() <= r && b.to_ullong() >= l)
        {

            if ((x & b.to_ullong()) == 0 || (y & b.to_ullong()) == 0)
                cout << 0 << '\n';
            else
                cout << b.to_ullong() << '\n';
        }
        else
        {
            ll msb_r = msb(r);

            for (int i = msb_r; i >= 0; --i)
            {
                if (a[i])
                {
                    if ((temp.to_ullong() | (1ULL << i)) <= r)
                        temp[i] = 1, bx[i] = by[i] = 0;
                }
            }

            bruteforce(temp);
            
            ll equal = r - temp.to_ullong();
            bitset<64> btx(0ULL), bty(0ULL);
            
            for (int i = msb_r; i >= 0; --i)
            {
                if (bx[i] && (btx.to_ullong() | (1ULL << i)) <= (equal/2))
                {
                    btx[i] = 1;
                }
            }

            for (int i = 0; i <= msb_r; ++i)
            {
                if (by[i] && (bty.to_ullong() | (1ULL << i)) <= (2 * equal - btx.to_ullong()))
                {
                    bty[i] = 1;
                }
            }
            
            temp = (temp|btx);
            temp = (temp|bty);
            
            // for (int i = 0; i <= msb_r; ++i) {
            //     if(b[i] && (temp.to_ullong() | (1ULL << i)) <= r) 
            //         temp[i] = 1;
            // }
            
            cout << temp.to_ullong() << "\n";
        }
    }

    return 0;
}

/*
INPUT
1
1000000 59239 0 100000

9541279
*/
