#include <iostream>
#include <vector>

using namespace std;

void traverse(const vector<pair<char, pair<int, int>>>& graph, int head) {
    const auto& cur = graph[head];
    if (cur.second.first) traverse(graph, cur.second.first);
    cout << cur.first;
    if (cur.second.second) traverse(graph, cur.second.second);

}

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    for(int t=1; t<=10; t++) {
        int n; cin >> n;
        vector<pair<char, pair<int, int>>> graph(n+1);
        for(int i = 1; i <= n; i++) {
            int ignore; cin >> ignore;
            cin >> graph[i].first; 
            if(2*i <= n) cin >> graph[i].second.first;
            if(2*i + 1 <= n) cin >> graph[i].second.second;
        }
        int ans = 0;
        cout << '#' << t << ' ';
        traverse(graph, 1);
        cout << '\n';
    }
    return 0;
}