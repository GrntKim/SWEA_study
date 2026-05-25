#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    for(int t=1; t<=10; t++) {
        int n, st; cin >> n >> st;
        vector<set<int>> graph(101);
        vector<bool> vis(101, false);
        for(int i=0; i<n/2; i++) {
            int u, v; cin >> u >> v;
            graph[u].insert(v);
        }

        queue<int> q;
        q.push(st);
        vis[st] = true;
        int ans;

        while(!q.empty()) {
            int size = q.size();
            ans = 0;
            while(size--) {
                int cur = q.front(); q.pop();
                ans = max(ans, cur);
                for(const int& nxt : graph[cur]) {
                    if(!vis[nxt]) {
                        q.push(nxt);
                        vis[nxt] = true;
                    }
                }
            }
        }

        cout << '#' << t << ' ' << ans << '\n';
    }
    return 0;
}