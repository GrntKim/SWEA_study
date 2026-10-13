#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

#define ll long long

vector<int> parent;

struct Island {
    int x, y;
};

struct Edge {
    int u, v;
    ll weight;
    bool operator<(const Edge& other) const {
        return weight < other.weight;
    }
};

int findParent(int node) {
    if (parent[node] == node) return node;
    return parent[node] = findParent(parent[node]);
}

bool mergeSets(int u, int v) {
    int ru = findParent(u);
    int rv = findParent(v);

    if (ru != rv) {
        parent[ru] = rv;
        return true;
    }
    return false;
}

ll getDistance(Island a, Island b) {
    ll dx = a.x - b.x, dy = a.y - b.y;
    return dx * dx + dy * dy;
}

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for (int t = 1; t <= T; t++) {
        int n; cin >> n;
        vector<Island> islands;
        parent.resize(n);

        vector<int> x_points(n);
        vector<int> y_points(n);
        for(int& x : x_points) cin >> x;
        for(int& y : y_points) cin >> y;

        double e; cin >> e;

        for(int i = 0; i < n; i++) {
            islands.push_back({x_points[i], y_points[i]});
            parent[i] = i;
        }

        vector<Edge> edges;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                ll dist = getDistance(islands[i], islands[j]);
                edges.push_back({i, j, dist});
            }
        }
        sort(edges.begin(), edges.end());

        ll ans = 0;
        int edges_count = 0;
        for (const auto& edge: edges) {
            if (mergeSets(edge.u, edge.v)) {
                ans += edge.weight;
                edges_count++;

                if (edges_count == n-1) break;
            }
        }

        cout << '#' << t << ' ' << llround(ans * e) << '\n';
    }
    return 0;
}
