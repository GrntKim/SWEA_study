#include <iostream>
using namespace std;

int board[15][15];
int dr[] = {0, 1, 0, -1};
int dc[] = {1, 0, -1, 0};

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for(int t=1; t<=T; t++) {
        int w; cin >> w;
        for(int i=0; i<w; i++)
            fill(board[i], board[i]+w, 0);
        board[0][0] = 1;
        int r = 0, c = 0, dir = 0;
        for(int x=2; x<=w*w; x++) {
            int nr = r + dr[dir];
            int nc = c + dc[dir];
            if(nr < 0 || nr >= w || nc < 0 || nc >= w || board[nr][nc] != 0) {
                dir = (dir+1)%4;
                nr = r + dr[dir];
                nc = c + dc[dir];
            }
            r = nr; c = nc;
            board[r][c] = x;
        }
        cout << '#' << t << '\n';
        for(int i=0; i<w; i++) {
            for(int j=0; j<w; j++)
                cout << board[i][j] << ' ';
            cout << '\n';
        }
    }
    return 0;
}