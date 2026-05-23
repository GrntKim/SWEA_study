#include <iostream>
using namespace std;

int board[9][9];
bool seen[10];

bool validate(const int board[9][9]) {
    for (int i=0; i<9; i++) {
        fill(seen, seen+10, false);
        for (int j=0; j<9; j++) {
            if (seen[board[i][j]]) return false;
            seen[board[i][j]] = true;
        }
        fill(seen, seen+10, false);
        for (int j=0; j<9; j++) {
            if (seen[board[j][i]]) return false;
            seen[board[j][i]] = true;
        }
        fill(seen, seen+10, false);
        int r = i/3*3, c = i%3*3;
        for (int j=r; j<r+3; j++) {
            for(int k=c; k<c+3; k++) {
                if (seen[board[j][k]]) return false;
                seen[board[j][k]] = true;
            }
        }
    }
    return true;
}

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for(int t=1; t<=T; t++) {
        for(int i=0; i<9; i++)
            for(int j=0; j<9; j++)
                cin >> board[i][j];

        cout << '#' << t << ' ' << validate(board) << '\n';
    }
    return 0;
}