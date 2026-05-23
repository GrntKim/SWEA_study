#include <iostream>

using namespace std;

int a[] = {1, 4, 9, 121, 484};

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for(int t=1; t<=T; t++) {
        int ans = 0;
        int l, r; cin >> l >> r;
        for (int i=0; i<5; i++)
            if (a[i] >=l && a[i] <= r) ans++;
        cout << '#' << t << ' ' << ans << '\n';
    }
    return 0;
}