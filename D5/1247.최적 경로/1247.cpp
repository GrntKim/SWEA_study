#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, ans, cr, cc, hr, hc;
vector<pair<int, int>> graph(11);
vector<bool> vis(11);

int calc_distance(const pair<int, int>& src, 
                  const pair<int, int>& dst) {
    return abs(dst.first - src.first) + 
           abs(dst.second - src.second);
}


void bt(int depth, const pair<int, int>& cur, int dist) {
    if (dist >= ans) return;

    if (depth == n) {
        ans = min(ans, dist + calc_distance(cur, {hr, hc}));
        return;
    }

    for (int nxt = 0; nxt < n; nxt++) {
        if (vis[nxt]) continue;

        vis[nxt] = true;
        bt(depth + 1, graph[nxt], dist + calc_distance(cur, graph[nxt]));
        vis[nxt] = false;
    }
}

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for (int t=1; t<=T; t++) {
        ans = 1e9;
        cin >> n;
        cin >> cr >> cc >> hr >> hc;
        fill(graph.begin(), graph.end(), pair<int, int>{});
        fill(vis.begin(), vis.end(), false);
        for(int i=0; i<n; i++)
            cin >> graph[i].first >> graph[i].second;
        bt(0, {cr, cc}, 0);
        
        cout << '#' << t << ' ' << ans << '\n';
    }
    return 0;
}