#include <iostream>

using namespace std;

string board[100];

void transpose() {
    for (int i = 0; i < 100; i++) {
        for (int j = i+1; j < 100; j++) {
            swap(board[i][j], board[j][i]);
        }
    }
}

bool is_palindrome(int r, int c, int len) {
    int st = c, ed = c + len - 1;
    while (st < ed) {
        if (board[r][st] != board[r][ed])
            return false;
        st++; ed--;
    }
    return true;
}

int iter(int max_len) {
    for (int r = 0; r < 100; r++) {
        for (int len = 100; len > max_len; len--) {
            bool found = false;
            for (int c = 0; c + len - 1 < 100; c++) {
                if (is_palindrome(r, c, len)) {
                    max_len = len;
                    found = true;
                    break;
                }
            }
            if (found) break;
        }
    }
    return  max_len;
}

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    for (int t = 1; t <= 10; t++) {
        int ans = 0;
        int tc; cin >> tc;
        for (int i = 0; i < 100; i++) cin >> board[i];

        ans = iter(0);
        transpose();
        ans = max(ans, iter(ans));

        cout << '#' << tc << ' ' << ans << '\n';
    }
    return 0;
}
