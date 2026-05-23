#include <iostream>
#include <vector>
using namespace std;

int solve(int n, int m, const vector<int>& a, const vector<int>& b) {
    int ans = 0;
    int l = 0, r = n-1;
    while(r < m) {
        int sum = 0;
        for(int i = l; i <= r; i++)
            sum += a[i-l] * b[i];
        ans = max(ans, sum);
        l++; r++;
    }
    return ans;
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("input.txt", "r", stdin);
    int T; cin >> T;
    for(int t = 1; t <= T; t++) {
        int n, m; cin >> n >> m;
        vector<int> a(n);
        vector<int> b(m);
        for(auto& i : a) cin >> i;
        for(auto& i : b) cin >> i;
        cout << '#' << t << ' ' << (n > m ? solve(m, n, b, a) : solve(n, m, a, b)) << '\n';
    }
}