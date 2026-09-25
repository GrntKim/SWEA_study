#include <iostream>
#include <algorithm>

using namespace std;

int board[100][100];

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    for (int t = 1; t <= 10; t++) {
        int tc; cin >> tc;
        int fss, bss, rs, cs; 
        fss = bss = rs = cs = 0;
        for (int r = 0; r < 100; r++) {
            for (int c = 0; c < 100; c++) {
                int x; cin >> x;
                board[r][c] = x;
            }
        }

        int cfss, cbss;
        cfss = cbss = 0;
        for (int r = 0; r < 100; r++) {
            int crs, ccs;
            crs = ccs = 0;
            for (int c = 0; c < 100; c++) {
                crs += board[r][c];
                ccs += board[c][r];
                if (r == c) cbss += board[r][c];
                if (r + c == 99) cfss += board[r][c];
            }
            rs = max(rs, crs);
            cs = max(cs, ccs);
        }
        fss = max(fss, cfss);
        bss = max(bss, cbss);
        cout << '#' << tc << ' ' << max({rs, cs, fss, bss}) << '\n';
    }
    return 0;
}
