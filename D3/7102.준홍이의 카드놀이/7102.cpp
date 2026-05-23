#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for(int t=1; t<=T; t++) {
        int n, m, mx = 0; cin >> n >> m;
        vector<int> freq(m+n+1, 0);
        for (int i=1; i<=n; i++)
            for (int j=1; j<=m; j++)
                mx = max(mx, ++freq[i+j]);
        
        cout << '#' << t << ' ';
        for(int i=1; i<=m+n; i++) 
            if (freq[i] == mx) cout << i << ' ';
        cout << '\n';
    }
    return 0;
}