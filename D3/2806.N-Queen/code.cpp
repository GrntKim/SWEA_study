#include <iostream>

using namespace std;

int ans, n;
int board[15];

bool promising(int c) {
    for (int i = 0; i < c; i++) {
        if (board[c] == board[i] || abs(board[c] - board[i]) == (c - i))
            return false;
    }
    return true;
}

void nq(int c) {
    if (c == n) {
        ans++;
        return;
    }

    for (int i = 0; i < n; i++) {
        board[c] = i;
        if (promising(c))
            nq(c+1);
    }
}

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for (int t = 1; t <= T; t++) {
        ans = 0;
        cin >> n;
        nq(0);
        cout << '#' << t << ' ' << ans << '\n';
    }
    return 0;
}
