#include <iostream>

using namespace std;

char board[8][8];
char board_t[8][8];

bool is_palindrome(const char (&board)[8][8], int r, int st, int ed) {
    while(st < ed) {
        if(board[r][st] != board[r][ed])
           return false;
        st++;
        ed--;
    }
    return true;
}

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    for(int t=1; t<=10; t++) {
        int len; cin >> len;
        for(int i=0; i<8; i++)
            for(int j=0; j<8; j++) {
                cin >> board[i][j];
                board_t[j][i] = board[i][j];
            }
        
        int ans = 0;
        for(int i=0; i<8; i++)
            for(int j=0; j<=8-len; j++) {
                if (is_palindrome(board, i, j, j+len-1)) ans++;
                if (is_palindrome(board_t, i, j, j+len-1)) ans++;
            }

        cout << '#' << t << ' ' << ans << '\n';
    }
    return 0;
}