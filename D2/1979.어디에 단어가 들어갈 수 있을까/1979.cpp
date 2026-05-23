#include <iostream>
using namespace std;

int board[20][20];
int main(void) {
    ios::sync_with_stdio(0); cin.tie(0);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for(int t=1; t<=T; t++) {
        int ans = 0;
        int n, k; cin >> n >> k;
        for(int i=0; i<n;i++)
            for(int j=0; j<n; j++)
                cin >> board[i][j];

        for(int r=0; r<n; r++) {
            int h = 0, v = 0;
            for(int c=0; c<n; c++) {
                if(board[r][c] == 1) 
                    h++;
                else {
                    if(h == k) ans++;
                    h = 0;
                }

                if(board[c][r] == 1)
                    v++;
                else {
                    if(v == k) ans++;
                    v = 0;
                }
            }
            if(h == k) ans++;
            if(v == k) ans++;
        }
        cout << '#' << t << ' ' << ans << '\n';
    }
    return 0;
}