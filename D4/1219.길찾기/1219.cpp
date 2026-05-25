#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

int next1[100];
int next2[100];
bool vis[100];

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    for(int t=1; t<=10; t++) {
        int n, paths; cin >> n >> paths;
        fill(next1, next1+100, 0);
        fill(next2, next2+100, 0);
        fill(vis, vis+100, false);
        for(int i=0; i<paths; i++) {
            int u, v; cin >> u >> v;
            if(!next1[u]) next1[u] = v;
            else next2[u] = v;
        }

        stack<int> s;
        s.push(0);

        bool possible = false;

        while(!s.empty()) {
            int cur = s.top();
            s.pop();
            if(cur == 99) {
                possible = true;
            }
            vis[cur] = true;
            if(next1[cur] && !vis[next1[cur]]) {
                s.push(next1[cur]);
            }
            if(next2[cur] && !vis[next2[cur]]) {
                s.push(next2[cur]);
            }
        }
        cout << '#' << t << ' ' << possible << '\n';
    }
    return 0;
}