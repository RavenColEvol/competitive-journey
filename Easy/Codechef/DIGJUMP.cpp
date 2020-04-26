#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;

int main()
{
	FIO;
	string s; cin >> s;

    vector<vector<int>> v(10);
    for(int i = 1; i < s.size(); i++) 
        v[s[i] - '0'].push_back(i);

    /* bsf logic */
    vector<bool> visited(100005, false);
    vector<int> dis(100005, 0);

    queue<int> index;
    index.push(0);
    dis[0] = 0;
    visited[0] = true;

    while(!index.empty())
    {
        int fr = index.front();
        if(fr == s.size() - 1) break;
        index.pop();

        int val = s[fr] - '0';
        for(int i : v[val]) {
            if(!visited[i]) {
                visited[i] = true;
                index.push(i);
                dis[i] = dis[fr] + 1;
            }
        }

        v[val].clear();

        if(fr-1 >= 0 && !visited[fr-1]) {
            visited[fr-1] = true;
            index.push(fr - 1);
            dis[fr-1] = dis[fr] + 1;
        }

        if(fr + 1 < s.size() && !visited[fr+1]) {
            visited[fr + 1] = true;
            index.push(fr + 1);
            dis[fr + 1] = dis[fr] + 1;
        }

    }

    cout << dis[s.size() - 1];

	return 0;
}