#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int nodes[1025];
int lim;

void recon(vector<vector<int>>& tree, int low, int high, int cur) {
    if (cur == lim) return;
    int mid = (low+high)/2;
    tree[cur].push_back(nodes[mid]);
    recon(tree, low, mid-1, cur+1);
    recon(tree, mid+1, high, cur+1);
}

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for (int t = 1; t <= T; t++) {
        cin >> lim; int mn = pow(2, lim)-1;
        for (int i = 0; i < mn; i++) cin >> nodes[i];
        vector<vector<int>> tree(lim, vector<int>(0));
        recon(tree, 0, mn-1, 0);
        cout << '#' << t << ' ';
        for (int i = 0; i < lim; i++) {
            for (const int& node : tree[i]) cout << node << ' ';
            cout << '\n';
        }
    }
    return 0;
}
