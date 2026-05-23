#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for(int t=1; t<=T; t++) {
        int n, up = 0, down = 0; 
        cin >> n; 
        vector<int> v(n);
        for(int& x : v) cin >> x;
        for(int i=1; i<n; i++) {
            int df = v[i] - v[i-1];
            if (df >= 0)  up = max(up, df);
            else down = max(down, abs(df));
        }
        cout << '#' << t << ' ' << up << ' ' << down << '\n';
    }
    return 0;
}