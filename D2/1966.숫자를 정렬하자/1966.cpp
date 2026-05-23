#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for(int t=1; t<=T; t++) {
        int n; cin >> n;
        vector<int> a(n);
        for(auto& x : a) cin >> x;
        sort(a.begin(), a.end());
        cout << '#' << t << ' ';
        for(const auto& x : a) cout << x << ' ';
        cout << '\n';
    }
    return 0;
}